#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/EventTypesCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__EventTypesCollection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventTypesCollection.TryGetStatusByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Melanchall::DryWetMidi::Core::EventTypesCollection::*)(::System::Type*, ::ByRef<uint8_t>)>(&::Melanchall::DryWetMidi::Core::EventTypesCollection::TryGetStatusByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25a2404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventTypesCollection*>::get(),
                        "TryGetStatusByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*& Melanchall::DryWetMidi::Core::EventTypesCollection::__cordl_internal_get__statusBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusBytes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>* const& Melanchall::DryWetMidi::Core::EventTypesCollection::__cordl_internal_get__statusBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusBytes;
}
constexpr void Melanchall::DryWetMidi::Core::EventTypesCollection::__cordl_internal_set__statusBytes(::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____statusBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool Melanchall::DryWetMidi::Core::EventTypesCollection::TryGetStatusByte(::System::Type*  type, ::ByRef<uint8_t>  statusByte)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventTypesCollection*>::get(),
                        "TryGetStatusByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type, statusByte);
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::EventTypesCollection::EventTypesCollection()   {
}
