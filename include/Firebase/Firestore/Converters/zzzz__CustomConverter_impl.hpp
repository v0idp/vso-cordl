#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/CustomConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/Converters/zzzz__CustomConverter_def.hpp"
#include "Firebase/Firestore/Converters/zzzz__IFirestoreInternalConverter_def.hpp"
#include "Firebase/Firestore/zzzz__FirestoreConverter_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Converters::CustomConverter.ForConverterType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::Converters::IFirestoreInternalConverter* (*)(::System::Type*, ::System::Type*)>(&::Firebase::Firestore::Converters::CustomConverter::ForConverterType)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1912b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::CustomConverter*>::get(),
                        "ForConverterType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Firestore::Converters::CustomConverter::setStaticF__method(::System::Reflection::MethodInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "_method", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::CustomConverter*>::get>(std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* Firebase::Firestore::Converters::CustomConverter::getStaticF__method()  {
return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "_method", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::CustomConverter*>::get>();
}
inline ::Firebase::Firestore::Converters::IFirestoreInternalConverter* Firebase::Firestore::Converters::CustomConverter::ForConverterType(::System::Type*  converterType, ::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::CustomConverter*>::get(),
                        "ForConverterType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::Converters::IFirestoreInternalConverter*, false>(nullptr, ___internal_method, converterType, targetType);
}
template<typename T>
inline ::Firebase::Firestore::Converters::IFirestoreInternalConverter* Firebase::Firestore::Converters::CustomConverter::CreateInstance(::Firebase::Firestore::FirestoreConverter_1<T>*  wrappedConverter)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::CustomConverter*>::get(),
                    "CreateInstance",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirestoreConverter_1<T>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::Converters::IFirestoreInternalConverter*, false>(nullptr, ___internal_method, wrappedConverter);
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Converters::CustomConverter::CustomConverter()   {
}
