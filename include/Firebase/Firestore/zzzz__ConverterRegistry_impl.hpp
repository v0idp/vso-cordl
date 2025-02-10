#pragma once
// IWYU pragma private; include "Firebase/Firestore/ConverterRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__ConverterRegistry_def.hpp"
#include "Firebase/Firestore/Converters/zzzz__IFirestoreInternalConverter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::ConverterRegistry.ToConverterDictionary
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>* (::Firebase::Firestore::ConverterRegistry::*)()>(&::Firebase::Firestore::ConverterRegistry::ToConverterDictionary)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x190ec94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ConverterRegistry*>::get(),
                        "ToConverterDictionary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*& Firebase::Firestore::ConverterRegistry::__cordl_internal_get__converters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____converters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>* const& Firebase::Firestore::ConverterRegistry::__cordl_internal_get__converters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____converters;
}
constexpr void Firebase::Firestore::ConverterRegistry::__cordl_internal_set__converters(::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____converters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>* Firebase::Firestore::ConverterRegistry::ToConverterDictionary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ConverterRegistry*>::get(),
                        "ToConverterDictionary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::ConverterRegistry::ConverterRegistry()   {
}
