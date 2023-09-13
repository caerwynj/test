
all: bhdr sizes

bhdr: bhdr.c
	gcc -o bhdr -I../acme-sac/Linux/arm/include -I../acme-sac/include bhdr.c

sizes: sizes.c
	gcc -o sizes sizes.c

