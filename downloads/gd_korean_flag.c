#include <stdio.h>
#include <gd.h>
#include <math.h>

void draw_korean_flag(gdImagePtr img);

int main() {
    // 設定圖片的寬度和高度
    int width = 600;
    int height = 400;

    // 建立真彩色圖片
    gdImagePtr img = gdImageCreateTrueColor(width, height);
    gdImageAlphaBlending(img, 0);

    // 繪製韓國國旗
    draw_korean_flag(img);

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

void draw_korean_flag(gdImagePtr img) {
    int width = gdImageSX(img);
    int height = gdImageSY(img);
    int white, red, blue, black;

    // 定義顏色
    white = gdImageColorAllocate(img, 255, 255, 255); // 白色
    red = gdImageColorAllocate(img, 255, 0, 0);       // 紅色
    blue = gdImageColorAllocate(img, 0, 0, 255);      // 藍色
    black = gdImageColorAllocate(img, 0, 0, 0);       // 黑色

    // 塗上白色背景
    gdImageFilledRectangle(img, 0, 0, width, height, white);

    // 繪製藍色圓圈（太極圖案）
    int center_x = width / 2;
    int center_y = height / 2;
    int circle_radius = (int)(width / 4);
    gdImageFilledEllipse(img, center_x, center_y, circle_radius * 2, circle_radius * 2, blue);

    // 繪製紅色圓圈（太極圖案）
    int smaller_radius = (int)(circle_radius * 0.8);
    gdImageFilledEllipse(img, center_x, center_y, smaller_radius * 2, smaller_radius * 2, red);

    // 繪製八卦圖案（黑色）
    int bar_width = (int)(width / 10);
    int bar_height = (int)(height / 6);

    // 左上
    gdImageFilledRectangle(img, 0, 0, bar_width, bar_height, black);
    // 右上
    gdImageFilledRectangle(img, width - bar_width, 0, width, bar_height, black);
    // 左下
    gdImageFilledRectangle(img, 0, height - bar_height, bar_width, height, black);
    // 右下
    gdImageFilledRectangle(img, width - bar_width, height - bar_height, width, height, black);
}
