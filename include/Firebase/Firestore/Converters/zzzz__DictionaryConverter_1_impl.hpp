#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/DictionaryConverter_1.hpp"
#include "Firebase/Firestore/Converters/zzzz__MapConverterBase_impl.hpp"
#include "Firebase/Firestore/Converters/zzzz__DictionaryConverter_1_def.hpp"
#include "Firebase/Firestore/zzzz__DeserializationContext_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "Firebase/Firestore/zzzz__SerializationContext_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename TValue>
constexpr ::System::Type*& Firebase::Firestore::Converters::DictionaryConverter_1<TValue>::__cordl_internal_get__concreteType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____concreteType;
}
template<typename TValue>
constexpr ::System::Type* const& Firebase::Firestore::Converters::DictionaryConverter_1<TValue>::__cordl_internal_get__concreteType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____concreteType;
}
template<typename TValue>
constexpr void Firebase::Firestore::Converters::DictionaryConverter_1<TValue>::__cordl_internal_set__concreteType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____concreteType, value);
}
template<typename TValue>
inline void Firebase::Firestore::Converters::DictionaryConverter_1<TValue>::_ctor(::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DictionaryConverter_1<TValue>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetType);
}
template<typename TValue>
inline ::System::Object* Firebase::Firestore::Converters::DictionaryConverter_1<TValue>::DeserializeMap(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  mapValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DictionaryConverter_1<TValue>*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, mapValue);
}
template<typename TValue>
inline void Firebase::Firestore::Converters::DictionaryConverter_1<TValue>::SerializeMap(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value, ::System::Collections::Generic::IDictionary_2<::StringW,::Firebase::Firestore::FieldValueProxy*>*  map)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DictionaryConverter_1<TValue>*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, value, map);
}
template<typename TValue>
inline ::Firebase::Firestore::Converters::DictionaryConverter_1<TValue>* Firebase::Firestore::Converters::DictionaryConverter_1<TValue>::New_ctor(::System::Type*  targetType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Converters::DictionaryConverter_1<TValue>*>(targetType));
}
// Ctor Parameters []
template<typename TValue>
constexpr ::Firebase::Firestore::Converters::DictionaryConverter_1<TValue>::DictionaryConverter_1()   {
}
