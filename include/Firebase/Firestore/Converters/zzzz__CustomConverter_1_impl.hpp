#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/CustomConverter_1.hpp"
#include "Firebase/Firestore/Converters/zzzz__IFirestoreInternalConverter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/Converters/zzzz__CustomConverter_1_def.hpp"
#include "Firebase/Firestore/zzzz__DeserializationContext_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "Firebase/Firestore/zzzz__FirestoreConverter_1_def.hpp"
#include "Firebase/Firestore/zzzz__SerializationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::Firebase::Firestore::FirestoreConverter_1<T>*& Firebase::Firestore::Converters::CustomConverter_1<T>::__cordl_internal_get__wrappedConverter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wrappedConverter;
}
template<typename T>
constexpr ::Firebase::Firestore::FirestoreConverter_1<T>* const& Firebase::Firestore::Converters::CustomConverter_1<T>::__cordl_internal_get__wrappedConverter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wrappedConverter;
}
template<typename T>
constexpr void Firebase::Firestore::Converters::CustomConverter_1<T>::__cordl_internal_set__wrappedConverter(::Firebase::Firestore::FirestoreConverter_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____wrappedConverter, value);
}
template<typename T>
inline void Firebase::Firestore::Converters::CustomConverter_1<T>::_ctor(::Firebase::Firestore::FirestoreConverter_1<T>*  wrappedConverter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::CustomConverter_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirestoreConverter_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, wrappedConverter);
}
template<typename T>
inline ::System::Object* Firebase::Firestore::Converters::CustomConverter_1<T>::DeserializeValue(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::CustomConverter_1<T>*>::get(),
                        "DeserializeValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DeserializationContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldValueProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, value);
}
template<typename T>
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::Converters::CustomConverter_1<T>::Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::CustomConverter_1<T>*>::get(),
                        "Serialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SerializationContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(this, ___internal_method, context, value);
}
template<typename T>
inline ::Firebase::Firestore::Converters::CustomConverter_1<T>* Firebase::Firestore::Converters::CustomConverter_1<T>::New_ctor(::Firebase::Firestore::FirestoreConverter_1<T>*  wrappedConverter)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Converters::CustomConverter_1<T>*>(wrappedConverter));
}
/// @brief Convert operator to "::Firebase::Firestore::Converters::IFirestoreInternalConverter"
template<typename T>
constexpr  Firebase::Firestore::Converters::CustomConverter_1<T>::operator ::Firebase::Firestore::Converters::IFirestoreInternalConverter*() noexcept {
return static_cast<::Firebase::Firestore::Converters::IFirestoreInternalConverter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Firebase::Firestore::Converters::IFirestoreInternalConverter"
template<typename T>
constexpr ::Firebase::Firestore::Converters::IFirestoreInternalConverter* Firebase::Firestore::Converters::CustomConverter_1<T>::i___Firebase__Firestore__Converters__IFirestoreInternalConverter() noexcept {
return static_cast<::Firebase::Firestore::Converters::IFirestoreInternalConverter*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Firebase::Firestore::Converters::CustomConverter_1<T>::CustomConverter_1()   {
}
