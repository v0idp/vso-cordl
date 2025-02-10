#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ReflectionAttributeProvider.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IAttributeProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ReflectionAttributeProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x281d0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Newtonsoft::Json::Serialization::ReflectionAttributeProvider::__cordl_internal_get__attributeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeProvider;
}
constexpr ::System::Object* const& Newtonsoft::Json::Serialization::ReflectionAttributeProvider::__cordl_internal_get__attributeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeProvider;
}
constexpr void Newtonsoft::Json::Serialization::ReflectionAttributeProvider::__cordl_internal_set__attributeProvider(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributeProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Serialization::ReflectionAttributeProvider::_ctor(::System::Object*  attributeProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeProvider);
}
inline ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider* Newtonsoft::Json::Serialization::ReflectionAttributeProvider::New_ctor(::System::Object*  attributeProvider)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>(attributeProvider));
}
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::IAttributeProvider"
constexpr  Newtonsoft::Json::Serialization::ReflectionAttributeProvider::operator ::Newtonsoft::Json::Serialization::IAttributeProvider*() noexcept {
return static_cast<::Newtonsoft::Json::Serialization::IAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::IAttributeProvider"
constexpr ::Newtonsoft::Json::Serialization::IAttributeProvider* Newtonsoft::Json::Serialization::ReflectionAttributeProvider::i___Newtonsoft__Json__Serialization__IAttributeProvider() noexcept {
return static_cast<::Newtonsoft::Json::Serialization::IAttributeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::ReflectionAttributeProvider()   {
}
