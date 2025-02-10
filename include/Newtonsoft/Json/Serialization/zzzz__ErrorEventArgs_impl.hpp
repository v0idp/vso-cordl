#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ErrorEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorEventArgs_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ErrorEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::ErrorEventArgs::*)(::System::Object*, ::Newtonsoft::Json::Serialization::ErrorContext*)>(&::Newtonsoft::Json::Serialization::ErrorEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2802558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ErrorEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ErrorContext*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Newtonsoft::Json::Serialization::ErrorEventArgs::__cordl_internal_get__CurrentObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentObject_k__BackingField;
}
constexpr ::System::Object* const& Newtonsoft::Json::Serialization::ErrorEventArgs::__cordl_internal_get__CurrentObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentObject_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::ErrorEventArgs::__cordl_internal_set__CurrentObject_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CurrentObject_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Serialization::ErrorContext*& Newtonsoft::Json::Serialization::ErrorEventArgs::__cordl_internal_get__ErrorContext_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorContext_k__BackingField;
}
constexpr ::Newtonsoft::Json::Serialization::ErrorContext* const& Newtonsoft::Json::Serialization::ErrorEventArgs::__cordl_internal_get__ErrorContext_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorContext_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::ErrorEventArgs::__cordl_internal_set__ErrorContext_k__BackingField(::Newtonsoft::Json::Serialization::ErrorContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ErrorContext_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Serialization::ErrorEventArgs::_ctor(::System::Object*  currentObject, ::Newtonsoft::Json::Serialization::ErrorContext*  errorContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ErrorEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ErrorContext*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentObject, errorContext);
}
inline ::Newtonsoft::Json::Serialization::ErrorEventArgs* Newtonsoft::Json::Serialization::ErrorEventArgs::New_ctor(::System::Object*  currentObject, ::Newtonsoft::Json::Serialization::ErrorContext*  errorContext)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::ErrorEventArgs*>(currentObject, errorContext));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::ErrorEventArgs::ErrorEventArgs()   {
}
