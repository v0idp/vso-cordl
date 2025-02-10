#pragma once
// IWYU pragma private; include "Firebase/Firestore/ValueDeserializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__ValueDeserializer_def.hpp"
#include "Firebase/Firestore/zzzz__DeserializationContext_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::ValueDeserializer.Deserialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::Firebase::Firestore::DeserializationContext*, ::Firebase::Firestore::FieldValueProxy*, ::System::Type*)>(&::Firebase::Firestore::ValueDeserializer::Deserialize)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x190e3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ValueDeserializer*>::get(),
                        "Deserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DeserializationContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldValueProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::ValueDeserializer.GetTargetType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::Firebase::Firestore::FieldValueProxy*)>(&::Firebase::Firestore::ValueDeserializer::GetTargetType)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x190e6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ValueDeserializer*>::get(),
                        "GetTargetType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldValueProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Firebase::Firestore::ValueDeserializer::Deserialize(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  value, ::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ValueDeserializer*>::get(),
                        "Deserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DeserializationContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldValueProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, context, value, targetType);
}
inline ::System::Type* Firebase::Firestore::ValueDeserializer::GetTargetType(::Firebase::Firestore::FieldValueProxy*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ValueDeserializer*>::get(),
                        "GetTargetType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldValueProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::ValueDeserializer::ValueDeserializer()   {
}
