objects = hello_world vars_types arrays m_arrays \
			conditions strings for while functions \
			static

all: $(objects)
	for obj in $(objects); do \
		cc $$obj.c -o $$obj;\
	done

run: $(objects)
	for obj in $(objects); do \
		./$$obj; \
	done

clean: $(objects)
	for obj in $(objects); do \
		rm $$obj;\
	done