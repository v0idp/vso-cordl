#pragma once
// IWYU pragma private; include "System/Collections/Generic/LinkedListNode_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::LinkedList_1<T>*& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
template<typename T>
constexpr ::System::Collections::Generic::LinkedList_1<T>* const& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
template<typename T>
constexpr void System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_set_list(::System::Collections::Generic::LinkedList_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___list, value);
}
template<typename T>
constexpr ::System::Collections::Generic::LinkedListNode_1<T>*& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
template<typename T>
constexpr ::System::Collections::Generic::LinkedListNode_1<T>* const& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
template<typename T>
constexpr void System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_set_next(::System::Collections::Generic::LinkedListNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___next, value);
}
template<typename T>
constexpr ::System::Collections::Generic::LinkedListNode_1<T>*& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
template<typename T>
constexpr ::System::Collections::Generic::LinkedListNode_1<T>* const& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
template<typename T>
constexpr void System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_set_prev(::System::Collections::Generic::LinkedListNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___prev, value);
}
template<typename T>
constexpr T& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_item()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
template<typename T>
constexpr T const& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_item() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
template<typename T>
constexpr void System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_set_item(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___item, value);
}
template<typename T>
inline void System::Collections::Generic::LinkedListNode_1<T>::_ctor(::System::Collections::Generic::LinkedList_1<T>*  list, T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LinkedListNode_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedList_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, value);
}
template<typename T>
inline ::System::Collections::Generic::LinkedListNode_1<T>* System::Collections::Generic::LinkedListNode_1<T>::get_Next()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LinkedListNode_1<T>*>::get(),
                        "get_Next",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*, false>(this, ___internal_method);
}
template<typename T>
inline T System::Collections::Generic::LinkedListNode_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LinkedListNode_1<T>*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline void System::Collections::Generic::LinkedListNode_1<T>::Invalidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LinkedListNode_1<T>*>::get(),
                        "Invalidate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::LinkedListNode_1<T>* System::Collections::Generic::LinkedListNode_1<T>::New_ctor(::System::Collections::Generic::LinkedList_1<T>*  list, T  value)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::LinkedListNode_1<T>*>(list, value));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Collections::Generic::LinkedListNode_1<T>::LinkedListNode_1()   {
}
