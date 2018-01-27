#include <stdio.h>
// SMO #IT Sales T-shirt 
//created by Panjamapon Karnasuta Student ID : 60070050
int main() {

 // input
 float ShirtPrice1, ShirtPrice2, ShirtPrice3,discount;

 int count;

 scanf("%f", &ShirtPrice1);

 scanf("%f", &discount);

 scanf("%d", &count);

 // ราคา รวมจำนวนสินค้า

 float priceIncludeCount = ShirtPrice1 * count;

 // ราคา รวม discount

 float discountPrice = 1-discount/100;

 // ราคา ที่ลดราคาแล้ว

 float includeDiscount = priceIncludeCount * discountPrice;
 
 // output
 printf("%.2f\n", includeDiscount);

}