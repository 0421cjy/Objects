#pragma once

#include "Bag.h"

namespace jy
{
    class Audience
    {
    private:
        Bag* m_bag;

    public:
        Audience(Bag* bag)
        {
            m_bag = bag;
        }

    public:
        Bag GetBag()
        {
            return m_bag;
        }
    };
}
