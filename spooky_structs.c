#include <stdio.h>

typedef enum {
    TRANSPARENT,
    BLACK,
    GRAY,
    GREEN,
    GLOWY,
    TURQUOISE
} Color;
enum Type { GHAST, GOBLIN, GHOST, ZOMBIE };

const char *get_type_string(enum Type t) {
    switch (t) {
    case GHAST: return "Ghast";
    case GOBLIN: return "Goblin";
    case GHOST: return "Ghost";
    case ZOMBIE: return "Zombie";
    }
}

const char *get_color_string(Color c) {
    switch (c) {
    case TRANSPARENT: return "Transparent";
    case BLACK: return "Black";
    case GRAY: return "Gray";
    case GREEN: return "Green";
    case GLOWY: return "Glowy";
    case TURQUOISE: return "Turquoise";
    }
}

typedef struct {
    enum Type type;
    Color color;
    float height;
    float float_height;
} Ghoul;


float get_top_of_head(Ghoul g) {
    return g.height + g.float_height;
}

void print_ghoul(Ghoul g) {
    printf("type: %s, color: %s\nheight: %f, float height: "
           "%f\nhead_height: "
           "%f\n\n",
           get_type_string(g.type),
           get_color_string(g.color), g.height,
           g.float_height, get_top_of_head(g));
}

void chase_spiderman(Ghoul *g){
    //(*g).float_height = 1250;
    g->float_height = 1250;
}

int main() {
    // Aggregate Initialization
    Ghoul casper = {GHOST, TRANSPARENT, 2.5, 4};
    // Individual Initialization
    Ghoul green_goblin;
    green_goblin.type = GOBLIN;
    green_goblin.color = GREEN;
    green_goblin.height = 5.75;
    green_goblin.float_height = 200;

    print_ghoul(casper);
    print_ghoul(green_goblin);

    chase_spiderman(&green_goblin);

    print_ghoul(green_goblin);

    return 0;
}
