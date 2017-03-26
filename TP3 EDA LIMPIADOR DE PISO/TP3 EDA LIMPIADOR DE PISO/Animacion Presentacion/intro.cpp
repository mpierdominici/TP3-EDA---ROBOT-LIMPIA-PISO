#include "../intro.h"



void intro_efectos(ALLEGRO_DISPLAY*display, int w, int h) {


	//al_init();
	//al_init_image_addon();
	//al_init_primitives_addon();
	//al_init_acodec_addon();
	//al_install_audio();
	//al_reserve_samples(1);
	//al_init_font_addon(); // initialize the font addon
	//al_init_ttf_addon();// initialize the ttf (True Type Font) addon

	
	//display = al_create_display(w, h);
	al_clear_to_color(al_map_rgb(25, 25, 25));
	al_flip_display();

	ALLEGRO_SAMPLE *sample = NULL;
	sample = al_load_sample("Animacion Presentacion/The-Avengers-Theme-Ringtone-2.wav");
	al_play_sample(sample, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_LOOP, NULL);
	al_rest(5);

	ALLEGRO_BITMAP  *image = NULL;
	ALLEGRO_BITMAP *image_encoge = NULL;

	image = al_load_bitmap("Animacion Presentacion/avenger.png");
	
	for (float timer = 120; timer != 1; timer--) {
		
		al_draw_tinted_scaled_bitmap(image,
			al_map_rgba_f(1 / timer, 1 / timer, 1 / timer, 1 / timer),
			0, 0, al_get_bitmap_width(image), al_get_bitmap_height(image),
			0.252525*w, 0.138888*h,  0.4395833*w, 0.77962*h, 0);
		al_flip_display();


		al_rest(0.08);
	}
	al_clear_to_color(al_map_rgb(25, 25, 25));
	al_flip_display();
	image = al_load_bitmap("Animacion Presentacion/ANTMAN.png");

	al_draw_scaled_bitmap(image,
		0, 0,                                // source origin
		al_get_bitmap_width(image),     // source width
		al_get_bitmap_height(image),    // source height
		 0.3906* w, 0.231481*h,                                // target origin
		0.234375* w , 0.76944* h ,                                // target dimensions
		0                                    // flags
	);
	

	al_flip_display();
	ALLEGRO_FONT *font = al_load_ttf_font("Animacion Presentacion/American Captain.ttf", 0.0444444 * h, 0);

	al_draw_text(font, al_map_rgb(240, 240, 240), w / 2, 0.0925925 *h , ALLEGRO_ALIGN_CENTRE, "uh que sucio esta el piso");
	al_flip_display();
	al_rest(5);


	image_encoge = al_load_bitmap("Animacion Presentacion/antman_aprieta.png");
	al_clear_to_color(al_map_rgb(25, 25, 25));

	al_draw_scaled_bitmap(image_encoge,
		0, 0,                                // source origin
		al_get_bitmap_width(image_encoge),     // source width
		al_get_bitmap_height(image_encoge),    // source height
		0.390625* w, 0.231481*h,                                // target origin
		0.25* w, 0.978709* h,                                // target dimensions
		0                                    // flags
	);


	al_draw_text(font, al_map_rgb(240, 240, 240), w / 2, 0.0925925*h, ALLEGRO_ALIGN_CENTRE, "hora de limpiar");

	al_flip_display();

	al_rest(2);
	al_destroy_sample(sample);


	for (int i = 1; i != 20; i++) {
		al_clear_to_color(al_map_rgb(25, 25, 25));
		al_flip_display();
		al_draw_scaled_bitmap(image,
			0, 0,                                // source origin
			al_get_bitmap_width(image),     // source width
			al_get_bitmap_height(image),    // source height
			0.390625* w, 0.231481*h,                                // target origin
			0.234375* w / i, 0.76944* h / i,                                // target dimensions
			0                                    // flags
		);

		al_flip_display();
		al_rest(0.08);
	}
	al_rest(2);


}