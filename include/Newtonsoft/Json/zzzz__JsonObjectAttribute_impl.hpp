#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonObjectAttribute.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__MemberSerialization_impl.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__Required_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonObjectAttribute_def.hpp"
#include "Newtonsoft/Json/zzzz__MemberSerialization_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonObjectAttribute.get_MemberSerialization
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::MemberSerialization (::Newtonsoft::Json::JsonObjectAttribute::*)()>(&::Newtonsoft::Json::JsonObjectAttribute::get_MemberSerialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27cd030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonObjectAttribute*>::get(),
                        "get_MemberSerialization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::MemberSerialization& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__memberSerialization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____memberSerialization;
}
constexpr ::Newtonsoft::Json::MemberSerialization const& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__memberSerialization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____memberSerialization;
}
constexpr void Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_set__memberSerialization(::Newtonsoft::Json::MemberSerialization  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____memberSerialization = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__missingMemberHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missingMemberHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> const& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__missingMemberHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missingMemberHandling;
}
constexpr void Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_set__missingMemberHandling(::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____missingMemberHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Required>& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__itemRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemRequired;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Required> const& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__itemRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemRequired;
}
constexpr void Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_set__itemRequired(::System::Nullable_1<::Newtonsoft::Json::Required>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____itemRequired = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__itemNullValueHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemNullValueHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__itemNullValueHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemNullValueHandling;
}
constexpr void Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_set__itemNullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____itemNullValueHandling = value;
}
inline ::Newtonsoft::Json::MemberSerialization Newtonsoft::Json::JsonObjectAttribute::get_MemberSerialization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonObjectAttribute*>::get(),
                        "get_MemberSerialization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MemberSerialization, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonObjectAttribute::JsonObjectAttribute()   {
}
