#include "../finalizar.h"


void efectos_para_finalizar(ALLEGRO_DISPLAY*display,int w,int h) {

	ALLEGRO_BITMAP  *image = NULL;
	image = al_load_bitmap("Animacion Presentacion/ANTMAN.png");
	for (int i = 20; i != 1; i--) {
		al_clear_to_color(al_map_rgb(25, 25, 25));
		al_flip_display();
		al_draw_scaled_bitmap(image,
			0, 0,                                // source origin
			al_get_bitmap_width(image),     // source width
			al_get_bitmap_height(image),    // source height
			0.2604166*w, 0.231481*h,                                // target origin
			0.234375* w / i, 0.76944* h / i,                                // target dimensions
			0                                    // flags
		);

		al_flip_display();
		al_rest(0.08);
	}
	al_clear_to_color(al_map_rgb(25, 25, 25));
	al_draw_scaled_bitmap(image,
		0, 0,                                // source origin
		al_get_bitmap_width(image),     // source width
		al_get_bitmap_height(image),    // source height
		0.2604166*w, 0.231481*h,                                // target origin
		0.234375* w , 0.76944* h ,                                // target dimensions
		0                                    // flags
	);
	
	al_flip_display();
	al_rest(3);
	image = al_load_bitmap("Animacion Presentacion/capi.png");
	
	al_draw_scaled_bitmap(image,
		0, 0,                                // source origin
		al_get_bitmap_width(image),     // source width
		al_get_bitmap_height(image),    // source height
		0.78125*w, 0.231481*h,                                // target origin
		0.31927* w, 0.906481* h,                                // target dimensions
		0                                    // flags
	);
	
	al_flip_display();
	ALLEGRO_FONT *font = al_load_ttf_font("Animacion Presentacion/American Captain.ttf", 0.04444444*h, 0);

	al_draw_text(font, al_map_rgb(240, 240, 240), 0.75 * w, 0.0925925 * h, ALLEGRO_ALIGN_CENTRE, "buen trabajo ant man");
	al_flip_display();
	al_rest(2);

	al_draw_text(font, al_map_rgb(240, 240, 240), 0.25* w, 0.0925925 * h, ALLEGRO_ALIGN_CENTRE, "A sus ordenes Capi");
	al_flip_display();
	al_rest(5);



}