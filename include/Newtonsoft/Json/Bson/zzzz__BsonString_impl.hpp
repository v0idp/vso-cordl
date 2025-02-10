#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonString.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonString._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonString::*)(::System::Object*, bool)>(&::Newtonsoft::Json::Bson::BsonString::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x284a7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::Bson::BsonString::__cordl_internal_get__IncludeLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IncludeLength_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Bson::BsonString::__cordl_internal_get__IncludeLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IncludeLength_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonString::__cordl_internal_set__IncludeLength_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IncludeLength_k__BackingField = value;
}
inline void Newtonsoft::Json::Bson::BsonString::_ctor(::System::Object*  value, bool  includeLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, includeLength);
}
inline ::Newtonsoft::Json::Bson::BsonString* Newtonsoft::Json::Bson::BsonString::New_ctor(::System::Object*  value, bool  includeLength)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Bson::BsonString*>(value, includeLength));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonString::BsonString()   {
}
