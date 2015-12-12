template <typename T>
class Calculator {
private:
    T x_;
    T y_;

public:
    Calculator(T x, T y);
    ~Calculator();

    auto add() const -> T;
    auto sub() const -> T;
    auto mul() const -> T;
};


template <typename T>
Calculator<T>::Calculator(T x, T y)
    :x_(x)
    ,y_(y)
{
}


template <typename T>
Calculator<T>::~Calculator()
{
}


template <typename T>
auto Calculator<T>::add() const -> T
{
    return x_ + y_;
}


template <typename T>
auto Calculator<T>::sub() const -> T
{
    return x_ - y_;
}


template <typename T>
auto Calculator<T>::mul() const -> T
{
    return x_*y_;
}

