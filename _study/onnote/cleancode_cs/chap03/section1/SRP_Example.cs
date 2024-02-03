using System;

namespace Section1
{
    public class SRPExample
    {
        decimal CalculateTotalPrice(decimal price, int taxRate, decimal shippingCharge)
        {
            // Before
            //decimal taxAmount = price * taxRate;
            //decimal totalAmount = price + taxAmount + shippingCharge;
            //return totalAmount;

            // After
            decimal taxAmount = CalculateTaxAmount(price, taxRate);
            decimal shippingCost = CalculateShippingCharge(shippingCharge);
            decimal totalAmount = price + taxAmount + shippingCost;
            return totalAmount;
        }

        decimal CalculateTaxAmount(decimal price, int taxRate)
        {
            return price * taxRate;
        }

        decimal CalculateShippingCharge(decimal shippingCharge)
        {
            // calculate shipping charge
            return shippingCharge;
        }
    }
}
