#pragma once

#include <ode/tableau/tableau_traits.hpp>

namespace ode
{
template <typename type = double>
struct runge_kutta_4_tableau {};

template <typename type>
__constant__ constexpr auto tableau_a<runge_kutta_4_tableau<type>> = std::array
{
  type(0.5),
  type(0.0), type(0.5),
  type(0.0), type(0.0), type(1.0)
};
template <typename type>
__constant__ constexpr auto tableau_b<runge_kutta_4_tableau<type>> = std::array
{
  type(1.0 / 6.0), type(1.0 / 3.0), type(1.0 / 3.0), type(1.0 / 6.0)
};
template <typename type>
__constant__ constexpr auto tableau_c<runge_kutta_4_tableau<type>> = std::array
{
  type(0.0), type(0.5), type(0.5), type(1.0)
};
}