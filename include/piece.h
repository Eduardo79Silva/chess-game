enum Type {
    NONE = 0,
    PAWN,
    BISHOP,
    KNIGHT,
    ROOK,
    QUEEN,
    KING
};

enum Color {
    BLACK = 1,
    WHITE
};

struct Piece {
    enum Type type;
    enum Color color;
};
