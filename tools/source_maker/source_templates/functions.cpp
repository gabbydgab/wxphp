/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * File that holds the functions code of the wxWidgets extension
 * 
 * @note
 * Some parts of this file are auto-generated by the wxPHP source maker
*/

#include "php_wxwidgets.h"
#include "functions.h"

<?php print $header_files ?>

/**
 * Predefined handcoded set of functions
 */
 
/* {{{ proto int wxExecute(string command)
   Executes another program in Unix or Windows. */
PHP_FUNCTION(php_wxExecute)
{
	char* _argStr0;
	int _argStr0_len;
	
	char parse_parameters[] = "s";
    
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, parse_parameters, &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		long ret0;
		ret0 = wxExecute(wxString(_argStr0, wxConvUTF8));
		
		RETURN_LONG((long)ret0)
	}
}
/* }}} */

/* {{{ proto int wxEntry()
   This function initializes wxWidgets in a platform-dependent way. */
PHP_FUNCTION(php_wxEntry)
{
	int argc = 1;
	char application_name[] = "wxPHP";
	char *argv[2] = { application_name, NULL };
	
	RETVAL_LONG(wxEntry(argc, argv));
}
/* }}} */

/* {{{ proto object wxC2D(object wxwidgets_object_constant)
   Converts a wxWidgets constant object to dynamic in order to be able to access its methods like wxC2D(wxNORMAL_FONT)->GetPointSize(). */
PHP_FUNCTION(php_wxC2D)
{	
	zval* constant_object = 0;
	
	char parse_parameters[] = "z";
    
    if(ZEND_NUM_ARGS() == 1)
    {
		if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, parse_parameters, &constant_object ) == SUCCESS)
		{	
			*return_value = *constant_object;
			zval_add_ref(&constant_object);
			return;
		}
	}
	
	zend_error(E_ERROR, "Ivalid count or type of parameters for wxC2D(), you should pass a constant object to transform to dynamic\n");
}
/* }}} */

/**
 * Space reserved for autogenerated functions
 */
 
<?php print $functions ?>
