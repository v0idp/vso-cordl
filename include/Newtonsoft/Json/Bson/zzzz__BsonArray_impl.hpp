#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonArray.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonArray_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonArray.Add
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonArray::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&::Newtonsoft::Json::Bson::BsonArray::Add)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x284a820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonArray*>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonArray.get_Type
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonType (::Newtonsoft::Json::Bson::BsonArray::*)()>(&::Newtonsoft::Json::Bson::BsonArray::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284a8c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonArray*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonArray*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*& Newtonsoft::Json::Bson::BsonArray::__cordl_internal_get__children()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____children;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>* const& Newtonsoft::Json::Bson::BsonArray::__cordl_internal_get__children() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____children;
}
constexpr void Newtonsoft::Json::Bson::BsonArray::__cordl_internal_set__children(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____children)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Bson::BsonArray::Add(::Newtonsoft::Json::Bson::BsonToken*  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonArray*>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline ::Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonArray::get_Type()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonArray*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonType, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonArray::BsonArray()   {
}
