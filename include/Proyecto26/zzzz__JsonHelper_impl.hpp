#pragma once
// IWYU pragma private; include "Proyecto26/JsonHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Proyecto26/zzzz__JsonHelper_def.hpp"
#include "Proyecto26/zzzz__JsonHelper_def.hpp"
template<typename T>
constexpr ::ArrayW<T,::Array<T>*>& Proyecto26::JsonHelper_Wrapper_1<T>::__cordl_internal_get_Items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
template<typename T>
constexpr ::ArrayW<T,::Array<T>*> const& Proyecto26::JsonHelper_Wrapper_1<T>::__cordl_internal_get_Items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
template<typename T>
constexpr void Proyecto26::JsonHelper_Wrapper_1<T>::__cordl_internal_set_Items(::ArrayW<T,::Array<T>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___Items, value);
}
template<typename T>
inline void Proyecto26::JsonHelper_Wrapper_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::JsonHelper_Wrapper_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline ::Proyecto26::JsonHelper_Wrapper_1<T>* Proyecto26::JsonHelper_Wrapper_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Proyecto26::JsonHelper_Wrapper_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Proyecto26::JsonHelper_Wrapper_1<T>::JsonHelper_Wrapper_1()   {
}
template<typename T>
inline ::ArrayW<T,::Array<T>*> Proyecto26::JsonHelper::ArrayFromJson(::StringW  json)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::JsonHelper*>::get(),
                    "ArrayFromJson",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(nullptr, ___internal_method, json);
}
template<typename T>
inline ::ArrayW<T,::Array<T>*> Proyecto26::JsonHelper::FromJsonString(::StringW  json)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::JsonHelper*>::get(),
                    "FromJsonString",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(nullptr, ___internal_method, json);
}
template<typename T>
inline ::StringW Proyecto26::JsonHelper::ArrayToJsonString(::ArrayW<T,::Array<T>*>  array)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::JsonHelper*>::get(),
                    "ArrayToJsonString",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, array);
}
template<typename T>
inline ::StringW Proyecto26::JsonHelper::ArrayToJsonString(::ArrayW<T,::Array<T>*>  array, bool  prettyPrint)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::JsonHelper*>::get(),
                    "ArrayToJsonString",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, array, prettyPrint);
}
// Ctor Parameters []
constexpr ::Proyecto26::JsonHelper::JsonHelper()   {
}
