objects = hello_world vars_types arrays m_arrays \
			conditions

all: $(objects)
	for obj in $(objects); do \
		cc -o $$obj $$obj.c;\
	done

clean: $(objects)
	for obj in $(objects); do \
		rm $$obj;\
	done