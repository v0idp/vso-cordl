#pragma once
// IWYU pragma private; include "Firebase/Firestore/ValueSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__ValueSerializer_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "Firebase/Firestore/zzzz__SerializationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::ValueSerializer.Serialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)(::Firebase::Firestore::SerializationContext*, ::System::Object*)>(&::Firebase::Firestore::ValueSerializer::Serialize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x190e220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ValueSerializer*>::get(),
                        "Serialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SerializationContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::ValueSerializer::Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ValueSerializer*>::get(),
                        "Serialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SerializationContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method, context, value);
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::ValueSerializer::ValueSerializer()   {
}
