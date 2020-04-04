#include "cl_application.h"

cl_application :: cl_application ( )
{
	set_object_name ( "root" );

	set_state ( 1 );
}


void cl_application :: bild_tree_objects ( )
{

	p_ob_3 = new cl_3 ( );
	p_ob_3 -> set_object_name ( "ob_1_3" );
	p_ob_3 -> set_parent      ( this );

	p_ob_4 = new cl_4 ( );
	p_ob_4 -> set_object_name ( "ob_1_4" );
	p_ob_4 -> set_parent      ( p_ob_3   );

	p_ob_4 =  new cl_4 ( );
	p_ob_4 -> set_object_name ( "ob_2_4" );
	p_ob_4 -> set_parent      (  this    );

	p_ob_3 =  new cl_3 ( );
	p_ob_3 -> set_object_name ( "ob_2_3" );
	p_ob_3 -> set_parent      (  p_ob_4  );
}

int cl_application :: exec_app ( )
{
	show_object_state ( );

	return 0;
}
