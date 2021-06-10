all:
	cc main.c libmlx.dylib -Imlx -framework OpenGL -framework Appkit
	./a.out
