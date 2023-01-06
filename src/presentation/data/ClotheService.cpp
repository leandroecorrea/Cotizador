#include "ClotheService.h"

int ClotheService::getShirtStock(ShirtNeck neck, ShirtSleeve sleeve, Quality quality)
{
    if (neck == ShirtNeck::MAO)
    {
        return sleeve == ShirtSleeve::SHORT ? SHIRT_SHORT_SLEEVE_MAO_STOCK : SHIRT_LONG_SLEEVE_MAO_STOCK;
    }
    return sleeve == SHORT ? SHIRT_SHORT_SLEEVE_NORMAL_STOCK : SHIRT_LONG_SLEEVE_NORMAL_STOCK;
}

int ClotheService::getPantStock(PantFit fit, Quality quality)
{
    return fit == STRETCH ? PANT_STRETCH : PANT_NORMAL;
}
