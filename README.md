# text2image-CImg-cpp

Project using CImg Library (https://cimg.eu/).

# draw_text API
image.draw_text(40,120,"Nguyen Van Huynh Y",black,white,1,50);
//x0,y0,text,foreground_color,background_color,opacity,font

# Compile with Ubuntu:
g++ text.cpp -o run

# Run:
./run

# Result:
result.bmp

--------------------------------

# You can save image with: save_*("image-name")

#with *:
        "pnm",
        "pfm",
        "bmp",
        "gif",
        "jpg",
        "off",
        "pan",
        "png",
        "tif",
        "inr",
        "dcm".
