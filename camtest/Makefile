CC=g++
#CFLAGS+=-g
CFLAGS+=`pkg-config --cflags opencv`
#CFLAGS+=-I/home/ubuntu/opencv/opencv-2.4.12/build/release/include/opencv
LDFLAGS+=`pkg-config --libs opencv`
#LDFLAGS+=-L/home/ubuntu/opencv/opencv-2.4.12/build/release/lib/ -lopencv_calib3d -lopencv_contrib -lopencv_core -lopencv_features2d -lopencv_flann -lopencv_gpu -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml -lopencv_objdetect -lopencv_photo -lopencv_stitching -lopencv_superres -lopencv_ts -lopencv_video -lopencv_videostab -lopencv_detection_based_tracker -lopencv_esm_panorama -lopencv_facedetect -lopencv_imuvstab -lopencv_tegra -lopencv_vstab -ltbb -lrt -lpthread -lm -ldl


PROG=camtest
OBJS=$(PROG).o

.PHONY: all clean
$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS) $(LDFLAGS)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $<

all: $(PROG)

clean:
	rm -f $(OBJS) $(PROG)

