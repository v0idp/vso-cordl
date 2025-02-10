#pragma once
// IWYU pragma private; include "RSG/Tuple_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "RSG/zzzz__Tuple_2_def.hpp"
template<typename T1,typename T2>
constexpr T1& RSG::Tuple_2<T1,T2>::__cordl_internal_get__Item1_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Item1_k__BackingField;
}
template<typename T1,typename T2>
constexpr T1 const& RSG::Tuple_2<T1,T2>::__cordl_internal_get__Item1_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Item1_k__BackingField;
}
template<typename T1,typename T2>
constexpr void RSG::Tuple_2<T1,T2>::__cordl_internal_set__Item1_k__BackingField(T1  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____Item1_k__BackingField, value);
}
template<typename T1,typename T2>
constexpr T2& RSG::Tuple_2<T1,T2>::__cordl_internal_get__Item2_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Item2_k__BackingField;
}
template<typename T1,typename T2>
constexpr T2 const& RSG::Tuple_2<T1,T2>::__cordl_internal_get__Item2_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Item2_k__BackingField;
}
template<typename T1,typename T2>
constexpr void RSG::Tuple_2<T1,T2>::__cordl_internal_set__Item2_k__BackingField(T2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____Item2_k__BackingField, value);
}
template<typename T1,typename T2>
inline void RSG::Tuple_2<T1,T2>::_ctor(T1  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Tuple_2<T1,T2>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item1, item2);
}
template<typename T1,typename T2>
inline T1 RSG::Tuple_2<T1,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Tuple_2<T1,T2>*>::get(),
                        "get_Item1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T1, false>(this, ___internal_method);
}
template<typename T1,typename T2>
inline void RSG::Tuple_2<T1,T2>::set_Item1(T1  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Tuple_2<T1,T2>*>::get(),
                        "set_Item1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T1,typename T2>
inline T2 RSG::Tuple_2<T1,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Tuple_2<T1,T2>*>::get(),
                        "get_Item2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T2, false>(this, ___internal_method);
}
template<typename T1,typename T2>
inline void RSG::Tuple_2<T1,T2>::set_Item2(T2  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Tuple_2<T1,T2>*>::get(),
                        "set_Item2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T1,typename T2>
inline ::RSG::Tuple_2<T1,T2>* RSG::Tuple_2<T1,T2>::New_ctor(T1  item1, T2  item2)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Tuple_2<T1,T2>*>(item1, item2));
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::RSG::Tuple_2<T1,T2>::Tuple_2()   {
}
