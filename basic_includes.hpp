
#ifndef BASIC_INCLUDES_HPP
#define BASIC_INCLUDES_HPP


#include <list>
#include <unordered_set>
#include <unordered_map>
#include <cstdint>

class CartesianGraph;
class CartesianVertex;


// vertex = node
typedef CartesianVertex Node;

// data structure typedefs
typedef std::list<CartesianVertex> vertex_list;
typedef uint32_t vertex_ind;

typedef std::unordered_set<CartesianVertex> vertex_set;
typedef std::list<CartesianGraph> graph_list;

// direction for cartesian logic
enum direction { right = 0 , up = 1, back = 2, left = 3 , down = 4 , front = 5 };

// vectors
struct vec2d {
    int x;
    int y;
};
struct vec3d {
    int x;
    int y;
    int z;
};
#endif //BASIC_INCLUDES_HPP

