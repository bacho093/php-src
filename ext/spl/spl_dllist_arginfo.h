/* This is a generated file, edit the .stub.php file instead. */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SplDoublyLinkedList_add, 0, 0, 2)
	ZEND_ARG_INFO(0, index)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SplDoublyLinkedList_pop, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_SplDoublyLinkedList_shift arginfo_class_SplDoublyLinkedList_pop

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SplDoublyLinkedList_push, 0, 0, 1)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

#define arginfo_class_SplDoublyLinkedList_unshift arginfo_class_SplDoublyLinkedList_push

#define arginfo_class_SplDoublyLinkedList_top arginfo_class_SplDoublyLinkedList_pop

#define arginfo_class_SplDoublyLinkedList_bottom arginfo_class_SplDoublyLinkedList_pop

#define arginfo_class_SplDoublyLinkedList_count arginfo_class_SplDoublyLinkedList_pop

#define arginfo_class_SplDoublyLinkedList_isEmpty arginfo_class_SplDoublyLinkedList_pop

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SplDoublyLinkedList_setIteratorMode, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_SplDoublyLinkedList_getIteratorMode arginfo_class_SplDoublyLinkedList_pop

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SplDoublyLinkedList_offsetExists, 0, 0, 1)
	ZEND_ARG_INFO(0, index)
ZEND_END_ARG_INFO()

#define arginfo_class_SplDoublyLinkedList_offsetGet arginfo_class_SplDoublyLinkedList_offsetExists

#define arginfo_class_SplDoublyLinkedList_offsetSet arginfo_class_SplDoublyLinkedList_add

#define arginfo_class_SplDoublyLinkedList_offsetUnset arginfo_class_SplDoublyLinkedList_offsetExists

#define arginfo_class_SplDoublyLinkedList_rewind arginfo_class_SplDoublyLinkedList_pop

#define arginfo_class_SplDoublyLinkedList_current arginfo_class_SplDoublyLinkedList_pop

#define arginfo_class_SplDoublyLinkedList_key arginfo_class_SplDoublyLinkedList_pop

#define arginfo_class_SplDoublyLinkedList_prev arginfo_class_SplDoublyLinkedList_pop

#define arginfo_class_SplDoublyLinkedList_next arginfo_class_SplDoublyLinkedList_pop

#define arginfo_class_SplDoublyLinkedList_valid arginfo_class_SplDoublyLinkedList_pop

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SplDoublyLinkedList_unserialize, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, serialized, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_SplDoublyLinkedList_serialize arginfo_class_SplDoublyLinkedList_pop

#define arginfo_class_SplDoublyLinkedList___serialize arginfo_class_SplDoublyLinkedList_pop

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SplDoublyLinkedList___unserialize, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_SplQueue_enqueue arginfo_class_SplDoublyLinkedList_push

#define arginfo_class_SplQueue_dequeue arginfo_class_SplDoublyLinkedList_pop