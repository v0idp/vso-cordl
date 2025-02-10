#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonObject.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonObject_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonProperty_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonObject.Add
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonObject::*)(::StringW, ::Newtonsoft::Json::Bson::BsonToken*)>(&::Newtonsoft::Json::Bson::BsonObject::Add)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x284a6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonObject*>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonObject.get_Type
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonType (::Newtonsoft::Json::Bson::BsonObject::*)()>(&::Newtonsoft::Json::Bson::BsonObject::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284a818;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonObject*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonObject*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*& Newtonsoft::Json::Bson::BsonObject::__cordl_internal_get__children()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____children;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>* const& Newtonsoft::Json::Bson::BsonObject::__cordl_internal_get__children() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____children;
}
constexpr void Newtonsoft::Json::Bson::BsonObject::__cordl_internal_set__children(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____children)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Bson::BsonObject::Add(::StringW  name, ::Newtonsoft::Json::Bson::BsonToken*  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonObject*>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, token);
}
inline ::Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonObject::get_Type()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonObject*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonType, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonObject::BsonObject()   {
}
