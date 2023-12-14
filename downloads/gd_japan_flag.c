#include <stdio.h>
#include <gd.h>
#include <math.h>

void draw_japan_flag(gdImagePtr img);

int main() {
    // 設定圖片的寬度和高度
    int width = 1200;
    int height = (int)(width * 2.0 / 3.0);

    // 建立真彩色圖片
    gdImagePtr img = gdImageCreateTrueColor(width, height);
    gdImageAlphaBlending(img, 0);

    // 繪製日本國旗
    draw_japan_flag(img);

    // 輸出圖片到一個 PNG 文件
    FILE *outputFile = fopen("./../images/japan_flag_in_gd.png", "wb");
    if (outputFile == NULL) {
        fprintf(stderr, "Error opening the output file.\n");
        return 1;
    }
    gdImagePngEx(img, outputFile, 9);
    fclose(outputFile);
    gdImageDestroy(img);

    return 0;
}

void draw_japan_flag(gdImagePtr img) {
    int width = gdImageSX(img);
    int height = gdImageSY(img);
    int white, red;

    // 定義顏色
    white = gdImageColorAllocate(img, 255, 255, 255); // 白色
    red = gdImageColorAllocate(img, 255, 0, 0);       // 紅色

    // 用白色填充整個圖片
    gdImageFilledRectangle(img, 0, 0, width, height, white);

    // 在中心繪製一個紅色圓圈
    int center_x = width / 2;
    int center_y = height / 2;
    int circle_radius = (int)(width / 5); // 根據需要調整半徑

    gdImageFilledEllipse(img, center_x, center_y, circle_radius * 2, circle_radius * 2, red);
}
