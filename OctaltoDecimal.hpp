

int OctaltoDecimal(int num)
{
    int ans=0, mul=1, rem;
    while(num>0)
    {
        //Obtaining the remainder
        rem = num%10;
        //Quotient part
        num = num/10;
        //Answer part;
        ans = rem*mul+ans;
        //Updating multiplier
        mul = mul*8;
        
    }
    return ans;
}
