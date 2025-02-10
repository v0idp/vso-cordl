#pragma once
// IWYU pragma private; include "Firebase/Firestore/FieldValue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__FieldValue_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::FieldValue.Increment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(int64_t)>(&::Firebase::Firestore::FieldValue::Increment)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x191c46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValue*>::get(),
                        "Increment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Firestore::FieldValue::setStaticF__ServerTimestamp_k__BackingField(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "<ServerTimestamp>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValue*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Firebase::Firestore::FieldValue::getStaticF__ServerTimestamp_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Object*, "<ServerTimestamp>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValue*>::get>();
}
inline void Firebase::Firestore::FieldValue::setStaticF__Delete_k__BackingField(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "<Delete>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValue*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Firebase::Firestore::FieldValue::getStaticF__Delete_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Object*, "<Delete>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValue*>::get>();
}
inline ::System::Object* Firebase::Firestore::FieldValue::Increment(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValue*>::get(),
                        "Increment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::FieldValue::FieldValue()   {
}
