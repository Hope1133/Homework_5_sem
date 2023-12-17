

#ifndef RectlangleClass_h
#define RectlangleClass_h

class Rectlangle{
private:
    int m_x_left_up;
    int m_y_left_up;
    int m_x_right_down;
    int m_y_right_down;
public:
    Rectlangle(int x_left_up, int y_left_up, int x_right_down, int y_right_down);
    int x_left_edge(){return m_x_left_up;}
    int x_right_edge(){return m_x_right_down;}
    int y_up_edge(){return m_y_left_up;}
    int y_down_edge(){return m_y_right_down;}

};



#endif /* CRectlangleClass_h */
