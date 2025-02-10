#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__Extensions_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template<typename U>
inline U Newtonsoft::Json::Linq::Extensions::Value(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*  value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::Extensions*>::get(),
                    "Value",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<U, false>(nullptr, ___internal_method, value);
}
template<typename T,typename U>
inline U Newtonsoft::Json::Linq::Extensions::Value(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::Extensions*>::get(),
                    "Value",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<U, false>(nullptr, ___internal_method, value);
}
template<typename T,typename U>
inline U Newtonsoft::Json::Linq::Extensions::Convert(T  token)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::Extensions*>::get(),
                    "Convert",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<U, false>(nullptr, ___internal_method, token);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::Extensions::Extensions()   {
}
