#define shuffle(keys, from, to) { \
    typeof(*keys) inserting = keys[from]; \
    while(from >= to) { \
        typeof(*keys) moving = keys[to]; \
	    keys[to] = inserting; \
	    inserting = moving; \
	    to++; \
    } \
} \
