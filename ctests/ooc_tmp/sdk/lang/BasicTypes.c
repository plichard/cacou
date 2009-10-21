/* lang.BasicTypes source file, generated with ooc */
#include "BasicTypes.h"
lang__Class *Pointer_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Pointer);
		_class->instanceSize = sizeof(lang__Pointer);
		_class->name = "Pointer";
	}
	return _class;
}


lang__Class *Char_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Char);
		_class->instanceSize = sizeof(lang__Char);
		_class->name = "Char";
	}
	return _class;
}


lang__Bool Char_isAlphaNumeric(lang__Char this)
{
	return isalnum(this);
}


lang__Bool Char_isAlpha(lang__Char this)
{
	return isalpha(this);
}


lang__Bool Char_isDigit(lang__Char this)
{
	return isdigit(this);
}


lang__Bool Char_isWhitespace(lang__Char this)
{
	return isspace(this);
}


lang__Char Char_toLower(lang__Char this)
{
	return tolower(this);
}


lang__Int Char_toInt(lang__Char this)
{
	if ((this >= 48) && (this <= 57))
	{
		return (this - 48);
	}
	return 0 - 1;
}


lang__Void Char_print(lang__Char this)
{
	printf("%c", this);
}


lang__Void Char_println(lang__Char this)
{
	printf("%c\n", this);
}


lang__Class *UChar_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__UChar);
		_class->instanceSize = sizeof(lang__UChar);
		_class->name = "UChar";
	}
	return _class;
}


lang__Class *WChar_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__WChar);
		_class->instanceSize = sizeof(lang__WChar);
		_class->name = "WChar";
	}
	return _class;
}


lang__Class *String_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Pointer);
		_class->instanceSize = sizeof(lang__Pointer);
		_class->name = "String";
	}
	return _class;
}


lang__String String_new(lang__SizeT length)
{
	return (lang__Pointer) GC_MALLOC(length);
}



lang__Bool String_equals(lang__String this, lang__String other)
{
	if ((this == NULL) || (other == NULL))
	{
		return false;
	}
	if ((lang__SizeT) strlen(this) != (lang__SizeT) strlen(other))
	{
		return false;
	}
	
	{
		lang__SizeT i;
		for (i = 0; i < (lang__SizeT) strlen(other); i++)
		{
			if (__OP_IDX_String_SizeT__Char(this, i) != __OP_IDX_String_SizeT__Char(other, i))
			{
				return false;
			}
		}
	};
	return true;
}







lang__Bool String_isEmpty(lang__String this)
{
	return (this == NULL) || (__OP_IDX_String_SizeT__Char(this, 0) == 0);
}


lang__Bool String_startsWith(lang__String this, lang__String s)
{
	if ((lang__SizeT) strlen(this) < (lang__SizeT) strlen(s))
	{
		return false;
	}
	
	{
		lang__SizeT i;
		for (i = 0; i < (lang__SizeT) strlen(s); i++)
		{
			if (__OP_IDX_String_SizeT__Char(this, i) != __OP_IDX_String_SizeT__Char(s, i))
			{
				return false;
			}
		}
	};
	return true;
}


lang__Bool String_endsWith(lang__String this, lang__String s)
{
	lang__SizeT l1 = (lang__SizeT) strlen(this);
	lang__SizeT l2 = (lang__SizeT) strlen(s);
	if (l1 < l2)
	{
		return false;
	}
	lang__SizeT offset = (l1 - l2);
	
	{
		lang__SizeT i;
		for (i = 0; i < l2; i++)
		{
			if (__OP_IDX_String_SizeT__Char(this, i + offset) != __OP_IDX_String_SizeT__Char(s, i))
			{
				return false;
			}
		}
	};
	return true;
}


lang__SizeT String_indexOf(lang__String this, lang__Char c)
{
	lang__SizeT length = (lang__SizeT) strlen(this);
	
	{
		lang__SizeT i;
		for (i = 0; i < length; i++)
		{
			if (__OP_IDX_String_SizeT__Char(this, i) == c)
			{
				return i;
			}
		}
	};
	return 0 - 1;
}


lang__Bool String_contains(lang__String this, lang__Char c)
{
	return String_indexOf(this, c) != 0 - 1;
}


lang__String String_trim_space(lang__String this)
{
	return String_trim(this, ' ');
}


lang__String String_trim(lang__String this, lang__Char c)
{
	lang__Int start = 0;
	while (__OP_IDX_String_SizeT__Char(this, start) == c)
	{
		start += 1;
	}
	lang__SizeT end = (lang__SizeT) strlen(this);
	while (__OP_IDX_String_SizeT__Char(this, end - 1) == c)
	{
		end -= 1;
	}
	if (start != 0 || end != (lang__SizeT) strlen(this))
	{
		return String_substring(this, start, end);
	}
	return this;
}


lang__SizeT String_first(lang__String this)
{
	return __OP_IDX_String_SizeT__Char(this, 0);
}


lang__SizeT String_lastIndex(lang__String this)
{
	return (lang__SizeT) strlen(this) - 1;
}


lang__Char String_last(lang__String this)
{
	return __OP_IDX_String_SizeT__Char(this, String_lastIndex(this));
}


lang__SizeT String_lastIndexOf(lang__String this, lang__Char c)
{
	lang__SizeT i = (lang__SizeT) strlen(this);
	while (i)
	{
		if (__OP_IDX_String_SizeT__Char(this, i) == c)
		{
			return i;
		}
		i -= 1;
	}
	return 0 - 1;
}


lang__String String_substring_tillEnd(lang__String this, lang__SizeT start)
{
	lang__SizeT len = (lang__SizeT) strlen(this);
	if (start > len)
	{
		printf("String.substring~tillEnd: out of bounds: length = %zd, start = %zd\n", len, start);
		return NULL;
	}
	lang__SizeT diff = (len - start);
	lang__String sub = ((lang__String) (lang__Pointer) GC_MALLOC(diff + 1));
	sub[diff + 1] = 0;
	memcpy(((lang__Pointer) (sub)), ((lang__Pointer) (((lang__Char *) this) + start)), diff);
	return sub;
}


lang__String String_substring(lang__String this, lang__SizeT start, lang__SizeT end)
{
	lang__SizeT len = (lang__SizeT) strlen(this);
	if (start > len || start > end || end > len)
	{
		printf("String.substring: out of bounds: length = %zd, start = %zd, end = %zd\n", len, start, end);
		return NULL;
	}
	lang__SizeT diff = (end - start);
	lang__String sub = ((lang__String) (lang__Pointer) GC_MALLOC(diff + 1));
	sub[diff + 1] = 0;
	memcpy(((lang__Pointer) (sub)), ((lang__Pointer) (((lang__Char *) this) + start)), diff);
	return sub;
}


lang__String String_reverse(lang__String this)
{
	lang__SizeT len = (lang__SizeT) strlen(this);
	if (!len)
	{
		return NULL;
	}
	lang__String result = ((lang__String) (lang__Pointer) GC_MALLOC(len + 1));
	
	{
		lang__SizeT i;
		for (i = 0; i < len; i++)
		{
			result[i] = this[(len - 1) - i];
		}
	};
	result[len] = 0;
	return result;
}


lang__Void String_print(lang__String this)
{
	printf("%s", this);
	fflush(stdout);
}


lang__Void String_println(lang__String this)
{
	printf("%s\n", this);
}


lang__String String_times(lang__String this, lang__Int count)
{
	lang__SizeT length = (lang__SizeT) strlen(this);
	lang__Char *result = ((lang__Char *) (lang__Pointer) GC_MALLOC((length * count) + 1));
	
	{
		lang__Int i;
		for (i = 0; i < count; i++)
		{
			memcpy(((lang__Pointer) (result + (i * length))), ((lang__Pointer) (this)), length);
		}
	};
	result[length * count] = '\0';
	return result;
}


lang__String String_clone(lang__String this)
{
	lang__SizeT length = (lang__SizeT) strlen(this);
	lang__Pointer copy = (lang__Pointer) GC_MALLOC(length + 1);
	memcpy(copy, ((lang__Pointer) (this)), length + 1);
	return copy;
}


lang__String String_append(lang__String this, lang__String other)
{
	lang__SizeT length = (lang__SizeT) strlen(this);
	lang__SizeT rlength = (lang__SizeT) strlen(other);
	lang__Char *copy = ((lang__Char *) (lang__Pointer) GC_MALLOC(length + rlength + 1));
	memcpy(((lang__Pointer) (copy)), ((lang__Pointer) (this)), length);
	memcpy(((lang__Pointer) (copy + length)), ((lang__Pointer) (other)), rlength + 1);
	return copy;
}


lang__String String_append_char(lang__String this, lang__Char other)
{
	lang__SizeT length = (lang__SizeT) strlen(this);
	lang__Char *copy = ((lang__Char *) (lang__Pointer) GC_MALLOC(length + 2));
	memcpy(((lang__Pointer) (copy)), ((lang__Pointer) (this)), length);
	copy[length] = other;
	return copy;
}


lang__String String_replace(lang__String this, lang__Char oldie, lang__Char kiddo)
{
	lang__SizeT length = (lang__SizeT) strlen(this);
	
	{
		lang__Int i;
		for (i = 0; i < length; i++)
		{
			if (__OP_IDX_String_SizeT__Char(this, i) == oldie)
			{
				this[i] = kiddo;
			}
		}
	};
	return this;
}


lang__String String_prepend(lang__String this, lang__String other)
{
	return String_append(other, this);
}


lang__String String_prepend_char(lang__String this, lang__Char other)
{
	lang__SizeT length = (lang__SizeT) strlen(this);
	lang__Char *copy = ((lang__Char *) (lang__Pointer) GC_MALLOC(length + 2));
	copy[0] = other;
	memcpy(((lang__Pointer) (copy + 1)), ((lang__Pointer) (this)), length);
	return copy;
}


lang__Char String_charAt(lang__String this, lang__SizeT index)
{
	return ((lang__Char *) this)[index];
}


lang__Class *LLong_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__LLong);
		_class->instanceSize = sizeof(lang__LLong);
		_class->name = "LLong";
	}
	return _class;
}


lang__String LLong_toString(lang__LLong this)
{
	lang__String str = (lang__Pointer) GC_MALLOC(((lang__SizeT) (64)));
	sprintf(str, "%lld", this);
	return str;
}


lang__String LLong_toHexString(lang__LLong this)
{
	lang__String str = (lang__Pointer) GC_MALLOC(((lang__SizeT) (64)));
	sprintf(str, "%llx", this);
	return str;
}


lang__Bool LLong_isOdd(lang__LLong this)
{
	return this % 2 == 1;
}


lang__Bool LLong_isEven(lang__LLong this)
{
	return this % 2 == 0;
}


lang__Bool LLong_in(lang__LLong this, lang__Range range)
{
	return this >= range.min && this < range.max;
}


lang__Class *Int_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Int);
		_class->instanceSize = sizeof(lang__Int);
		_class->name = "Int";
	}
	return _class;
}


lang__String Int_toString(lang__Int this)
{
	lang__String str = (lang__Pointer) GC_MALLOC(((lang__SizeT) (64)));
	sprintf(str, "%d", this);
	return str;
}


lang__Bool Int_isOdd(lang__Int this)
{
	return this % 2 == 1;
}


lang__Bool Int_isEven(lang__Int this)
{
	return this % 2 == 0;
}


lang__Bool Int_in(lang__Int this, lang__Range range)
{
	return this >= range.min && this < range.max;
}


lang__Class *UInt_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__UInt);
		_class->instanceSize = sizeof(lang__UInt);
		_class->name = "UInt";
	}
	return _class;
}


lang__Class *Short_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Short);
		_class->instanceSize = sizeof(lang__Short);
		_class->name = "Short";
	}
	return _class;
}


lang__Class *UShort_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__UShort);
		_class->instanceSize = sizeof(lang__UShort);
		_class->name = "UShort";
	}
	return _class;
}


lang__Class *Long_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Long);
		_class->instanceSize = sizeof(lang__Long);
		_class->name = "Long";
	}
	return _class;
}


lang__Class *ULong_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__ULong);
		_class->instanceSize = sizeof(lang__ULong);
		_class->name = "ULong";
	}
	return _class;
}


lang__Class *ULLong_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__ULLong);
		_class->instanceSize = sizeof(lang__ULLong);
		_class->name = "ULLong";
	}
	return _class;
}


lang__Class *Int8_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Int8);
		_class->instanceSize = sizeof(lang__Int8);
		_class->name = "Int8";
	}
	return _class;
}


lang__Class *Int16_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Int16);
		_class->instanceSize = sizeof(lang__Int16);
		_class->name = "Int16";
	}
	return _class;
}


lang__Class *Int32_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Int32);
		_class->instanceSize = sizeof(lang__Int32);
		_class->name = "Int32";
	}
	return _class;
}


lang__Class *Int64_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Int64);
		_class->instanceSize = sizeof(lang__Int64);
		_class->name = "Int64";
	}
	return _class;
}


lang__Class *UInt8_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__UInt8);
		_class->instanceSize = sizeof(lang__UInt8);
		_class->name = "UInt8";
	}
	return _class;
}


lang__Class *UInt16_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__UInt16);
		_class->instanceSize = sizeof(lang__UInt16);
		_class->name = "UInt16";
	}
	return _class;
}


lang__Class *UInt32_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__UInt32);
		_class->instanceSize = sizeof(lang__UInt32);
		_class->name = "UInt32";
	}
	return _class;
}


lang__Class *UInt64_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__UInt64);
		_class->instanceSize = sizeof(lang__UInt64);
		_class->name = "UInt64";
	}
	return _class;
}


lang__Class *Octet_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Octet);
		_class->instanceSize = sizeof(lang__Octet);
		_class->name = "Octet";
	}
	return _class;
}


lang__Class *SizeT_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__SizeT);
		_class->instanceSize = sizeof(lang__SizeT);
		_class->name = "SizeT";
	}
	return _class;
}


lang__Class *Bool_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Bool);
		_class->instanceSize = sizeof(lang__Bool);
		_class->name = "Bool";
	}
	return _class;
}


lang__String Bool_toString(lang__Bool this)
{
	return this ? "true" : "false";
}


lang__Class *Float_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Float);
		_class->instanceSize = sizeof(lang__Float);
		_class->name = "Float";
	}
	return _class;
}


lang__Class *LDouble_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__LDouble);
		_class->instanceSize = sizeof(lang__LDouble);
		_class->name = "LDouble";
	}
	return _class;
}


lang__Class *Double_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Double);
		_class->instanceSize = sizeof(lang__Double);
		_class->name = "Double";
	}
	return _class;
}


lang__String Double_toString(lang__Double this)
{
	lang__String str = (lang__Pointer) GC_MALLOC(((lang__SizeT) (64)));
	sprintf(str, "%.2f", this);
	return str;
}


lang__Double Double_abs(lang__Double this)
{
	return this < 0 ? 0 - this : this;
}


lang__Class *Range_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Range);
		_class->instanceSize = sizeof(lang__Range);
		_class->name = "Range";
	}
	return _class;
}


lang__Range Range_new(lang__Int min, lang__Int max)
{
	lang__Range this;
	this.min = min;
	this.max = max;
	return this;
}



lang__Void Class___defaults___impl(lang__Class *this)
{
	Object___defaults___impl((lang__Object *) this);
}

lang__Void Class___destroy___impl(lang__Class *this)
{
}

lang__Object *Class_alloc(lang__Class *this)
{
	lang__Object *object = ((lang__Object *) (lang__Pointer) GC_MALLOC(this->instanceSize));
	if (object)
	{
		object->class = this;
		Object___defaults__(object);
	}
	return object;
}

lang__Bool Class_instanceof(lang__Class *this, lang__Class *T)
{
	if (this == T)
	{
		return true;
	}
	return (this->super ? Class_instanceof(this->super, T) : false);
}

lang__Class *Class_class()
{
	static lang__Bool __done__ = false;
	static lang__ClassClass class = 
	{
		{
			.instanceSize = sizeof(lang__Class),
			.size = sizeof(void*),
			.name = "Class",
		},
		.__load__ = Class___load__,
		.__defaults__ = Class___defaults___impl,
		.__destroy__ = Class___destroy___impl,
		.alloc = Class_alloc,
		.instanceof = Class_instanceof,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	if(!__done__)
	{
		__done__ = true;
		classPtr->super = Object_class();
	}
	return classPtr;
}


lang__Void Class___defaults__(lang__Class *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void Class___destroy__(lang__Class *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Void Class___load__()
{
}



lang__Void Object___defaults___impl(lang__Object *this)
{
}

lang__Void Object___destroy___impl(lang__Object *this)
{
}

lang__Class *Object_class()
{
	static lang__ObjectClass class = 
	{
		{
			.instanceSize = sizeof(lang__Object),
			.size = sizeof(void*),
			.name = "Object",
		},
		.__load__ = Object___load__,
		.__defaults__ = Object___defaults___impl,
		.__destroy__ = Object___destroy___impl,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	return classPtr;
}


lang__Void Object___defaults__(lang__Object *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void Object___destroy__(lang__Object *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Void Object___load__()
{
}



lang__Void Iterator___defaults___impl(lang__Iterator *this)
{
	Object___defaults___impl((lang__Object *) this);
}

lang__Void Iterator___destroy___impl(lang__Iterator *this)
{
}

lang__Class *Iterator_class()
{
	static lang__Bool __done__ = false;
	static lang__IteratorClass class = 
	{
		{
			{
				.instanceSize = sizeof(lang__Iterator),
				.size = sizeof(void*),
				.name = "Iterator",
			},
			.__load__ = (lang__Void (*)()) Iterator___load__,
			.__defaults__ = (lang__Void (*)(lang__Object *)) Iterator___defaults___impl,
			.__destroy__ = (lang__Void (*)(lang__Object *)) Iterator___destroy___impl,
		},
		.hasNext = Iterator_hasNext,
		.next = Iterator_next,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	if(!__done__)
	{
		__done__ = true;
		classPtr->super = Object_class();
	}
	return classPtr;
}


lang__Void Iterator___defaults__(lang__Iterator *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void Iterator___destroy__(lang__Iterator *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Bool Iterator_hasNext(lang__Iterator *this)
{
	return (lang__Bool)((lang__IteratorClass *)((lang__Object *)this)->class)->hasNext((lang__Iterator *) this);
}


void Iterator_next(lang__Iterator *this, lang__Pointer __returnArg)
{
	((lang__IteratorClass *)((lang__Object *)this)->class)->next((lang__Iterator *) this, __returnArg);
}


lang__Void Iterator___load__()
{
}



lang__Void Iterable___defaults___impl(lang__Iterable *this)
{
	Object___defaults___impl((lang__Object *) this);
}

lang__Void Iterable___destroy___impl(lang__Iterable *this)
{
}

lang__Class *Iterable_class()
{
	static lang__Bool __done__ = false;
	static lang__IterableClass class = 
	{
		{
			{
				.instanceSize = sizeof(lang__Iterable),
				.size = sizeof(void*),
				.name = "Iterable",
			},
			.__load__ = (lang__Void (*)()) Iterable___load__,
			.__defaults__ = (lang__Void (*)(lang__Object *)) Iterable___defaults___impl,
			.__destroy__ = (lang__Void (*)(lang__Object *)) Iterable___destroy___impl,
		},
		.iterator = Iterable_iterator,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	if(!__done__)
	{
		__done__ = true;
		classPtr->super = Object_class();
	}
	return classPtr;
}


lang__Void Iterable___defaults__(lang__Iterable *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void Iterable___destroy__(lang__Iterable *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Iterator *Iterable_iterator(lang__Iterable *this)
{
	return (lang__Iterator *)((lang__IterableClass *)((lang__Object *)this)->class)->iterator((lang__Iterable *) this);
}


lang__Void Iterable___load__()
{
}



lang__Void Interface___defaults___impl(lang__Interface *this)
{
	Object___defaults___impl((lang__Object *) this);
}

lang__Void Interface___destroy___impl(lang__Interface *this)
{
}

lang__Void Interface_init_impl(lang__Interface *this, lang__Object *realThis, lang__Object *funcs)
{
	this->funcs = funcs;
	this->realThis = realThis;
}

lang__Class *Interface_class()
{
	static lang__Bool __done__ = false;
	static lang__InterfaceClass class = 
	{
		{
			{
				.instanceSize = sizeof(lang__Interface),
				.size = sizeof(void*),
				.name = "Interface",
			},
			.__load__ = (lang__Void (*)()) Interface___load__,
			.__defaults__ = (lang__Void (*)(lang__Object *)) Interface___defaults___impl,
			.__destroy__ = (lang__Void (*)(lang__Object *)) Interface___destroy___impl,
		},
		.new = Interface_new,
		.init = Interface_init_impl,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	if(!__done__)
	{
		__done__ = true;
		classPtr->super = Object_class();
	}
	return classPtr;
}


lang__Void Interface___defaults__(lang__Interface *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void Interface___destroy__(lang__Interface *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Void Interface_init(lang__Interface *this, lang__Object *realThis, lang__Object *funcs)
{
	((lang__InterfaceClass *)((lang__Object *)this)->class)->init((lang__Interface *) this, realThis, funcs);
}


lang__Void Interface___load__()
{
}


lang__Interface *Interface_new(lang__Object *realThis, lang__Object *funcs)
{
	lang__Interface *this = ((lang__Interface *) Class_alloc(Interface_class()));
	Interface_init(this, realThis, funcs);
	return this;
}



lang__Void Exception___defaults___impl(lang__Exception *this)
{
	Object___defaults___impl((lang__Object *) this);
}

lang__Void Exception___destroy___impl(lang__Exception *this)
{
}

lang__Void Exception_init_impl(lang__Exception *this, lang__Class *origin, lang__String msg)
{
	this->msg = msg;
	this->origin = origin;
}

lang__Void Exception_init_noOrigin_impl(lang__Exception *this, lang__String msg)
{
	this->msg = msg;
}

lang__Void Exception_crash_impl(lang__Exception *this)
{
	fflush(stdout);
	lang__Int x = 0;
	x = 1 / x;
}

lang__String Exception_getMessage_impl(lang__Exception *this)
{
	lang__Int max = 1024;
	lang__String buffer = ((lang__String) (lang__Pointer) GC_MALLOC(((lang__SizeT) (max))));
	if (this->origin)
	{
		snprintf(buffer, max, "[%s in %s]: %s\n", ((lang__Object*) this)->class->name, this->origin->name, this->msg);
	}
	else 
	{
		snprintf(buffer, max, "[%s]: %s\n", ((lang__Object*) this)->class->name, this->msg);
	}
	return buffer;
}

lang__Void Exception_print_impl(lang__Exception *this)
{
	fprintf(stderr, "%s", Exception_getMessage(this));
}

lang__Void Exception_throw_impl(lang__Exception *this)
{
	Exception_print(this);
	Exception_crash(this);
}

lang__Class *Exception_class()
{
	static lang__Bool __done__ = false;
	static lang__ExceptionClass class = 
	{
		{
			{
				.instanceSize = sizeof(lang__Exception),
				.size = sizeof(void*),
				.name = "Exception",
			},
			.__load__ = (lang__Void (*)()) Exception___load__,
			.__defaults__ = (lang__Void (*)(lang__Object *)) Exception___defaults___impl,
			.__destroy__ = (lang__Void (*)(lang__Object *)) Exception___destroy___impl,
		},
		.new = Exception_new,
		.init = Exception_init_impl,
		.new_noOrigin = Exception_new_noOrigin,
		.init_noOrigin = Exception_init_noOrigin_impl,
		.crash = Exception_crash_impl,
		.getMessage = Exception_getMessage_impl,
		.print = Exception_print_impl,
		.throw = Exception_throw_impl,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	if(!__done__)
	{
		__done__ = true;
		classPtr->super = Object_class();
	}
	return classPtr;
}


lang__Void Exception___defaults__(lang__Exception *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void Exception___destroy__(lang__Exception *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Void Exception_init(lang__Exception *this, lang__Class *origin, lang__String msg)
{
	((lang__ExceptionClass *)((lang__Object *)this)->class)->init((lang__Exception *) this, origin, msg);
}


lang__Void Exception_init_noOrigin(lang__Exception *this, lang__String msg)
{
	((lang__ExceptionClass *)((lang__Object *)this)->class)->init_noOrigin((lang__Exception *) this, msg);
}


lang__Void Exception_crash(lang__Exception *this)
{
	((lang__ExceptionClass *)((lang__Object *)this)->class)->crash((lang__Exception *) this);
}


lang__String Exception_getMessage(lang__Exception *this)
{
	return (lang__String)((lang__ExceptionClass *)((lang__Object *)this)->class)->getMessage((lang__Exception *) this);
}


lang__Void Exception_print(lang__Exception *this)
{
	((lang__ExceptionClass *)((lang__Object *)this)->class)->print((lang__Exception *) this);
}


lang__Void Exception_throw(lang__Exception *this)
{
	((lang__ExceptionClass *)((lang__Object *)this)->class)->throw((lang__Exception *) this);
}


lang__Void Exception___load__()
{
}


lang__Exception *Exception_new(lang__Class *origin, lang__String msg)
{
	lang__Exception *this = ((lang__Exception *) Class_alloc(Exception_class()));
	Exception_init(this, origin, msg);
	return this;
}


lang__Exception *Exception_new_noOrigin(lang__String msg)
{
	lang__Exception *this = ((lang__Exception *) Class_alloc(Exception_class()));
	Exception_init_noOrigin(this, msg);
	return this;
}


lang__Char __OP_IDX_String_SizeT__Char(lang__String string, lang__SizeT index)
{
	return String_charAt(string, index);
}

lang__String __OP_MUL_String_Int__String(lang__String str, lang__Int count)
{
	return String_times(str, count);
}

lang__String __OP_ADD_String_String__String(lang__String left, lang__String right)
{
	return String_append(left, right);
}

lang__String __OP_ADD_LLong_String__String(lang__LLong left, lang__String right)
{
	return __OP_ADD_String_String__String(LLong_toString(left), right);
}

lang__String __OP_ADD_String_LLong__String(lang__String left, lang__LLong right)
{
	return __OP_ADD_String_String__String(left, LLong_toString(right));
}

lang__String __OP_ADD_Int_String__String(lang__Int left, lang__String right)
{
	return __OP_ADD_String_String__String(Int_toString(left), right);
}

lang__String __OP_ADD_String_Int__String(lang__String left, lang__Int right)
{
	return __OP_ADD_String_String__String(left, Int_toString(right));
}

lang__String __OP_ADD_Bool_String__String(lang__Bool left, lang__String right)
{
	return __OP_ADD_String_String__String(Bool_toString(left), right);
}

lang__String __OP_ADD_String_Bool__String(lang__String left, lang__Bool right)
{
	return __OP_ADD_String_String__String(left, Bool_toString(right));
}

lang__String __OP_ADD_Double_String__String(lang__Double left, lang__String right)
{
	return __OP_ADD_String_String__String(Double_toString(left), right);
}

lang__String __OP_ADD_String_Double__String(lang__String left, lang__Double right)
{
	return __OP_ADD_String_String__String(left, Double_toString(right));
}

lang__String __OP_ADD_String_Char__String(lang__String left, lang__Char right)
{
	return String_append_char(left, right);
}

lang__String __OP_ADD_Char_String__String(lang__Char left, lang__String right)
{
	return String_prepend_char(right, left);
}


lang__Void _lang_BasicTypes_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		Class___load__();
		Object___load__();
		Iterator___load__();
		Iterable___load__();
		Interface___load__();
		Exception___load__();
		_lang_BasicTypes_load();
		_lang_ooclib_load();
		_lang_stdio_load();
	}
}

