#define SHUFFLE(keys, from, to) do { \
    typeof(*keys) inserting = keys[from]; \
    while(from >= to) { \
        typeof(*keys) moving = keys[to]; \
        keys[to] = inserting;            \
        inserting = moving;              \
        to++;                            \
    } \
} while(0)

/**
 * For each element el in keys, compare el to each previously sorted element.
 * If el is less than an element coming before it, insert it before said element and quit comparing.
 */
#define INSERTION_SORT(keys, size) do { \
    for (int position = 1; position < size; position++) { \
        for (int considering = 0; considering <= position; considering++) { \
            if (keys[position] < keys[considering]) { \
                SHUFFLE(keys, position, considering);    \
                break; \
            } \
        } \
    } \
} while(0)
