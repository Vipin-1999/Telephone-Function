SW = swig
NG = node-gyp
dcpp = telephone.cpp
dwcxx= telephone_wrap.cxx
INTFILE = ./telephone.i
SFLAGS = -c++ -javascript -node
NFLAGS = configure build
INC = -I/usr/lib/node_modules/node-gyp -I/usr/include/node -I/usr/share/swig/4.0.0
all: build mv clean

build : $(dcpp) $(dwcxx)
	$(NG) $(NFLAGS) $(INC)

mv :
	mv build/Release/Telephone.node ./

$(dwcxx) : $(dcpp)
	$(SW) $(SFLAGS) $(INC) $(INTFILE)

clean : 
	rm -rf $(dwcxx) build 
