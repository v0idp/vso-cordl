#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/UnknownChunk.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiChunk_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__UnknownChunk_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiWriter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__WritingSettings_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::UnknownChunk.get_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Melanchall::DryWetMidi::Core::UnknownChunk::*)()>(&::Melanchall::DryWetMidi::Core::UnknownChunk::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::UnknownChunk*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::UnknownChunk.WriteContent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::UnknownChunk::*)(::Melanchall::DryWetMidi::Core::MidiWriter*, ::Melanchall::DryWetMidi::Core::WritingSettings*)>(&::Melanchall::DryWetMidi::Core::UnknownChunk::WriteContent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25a0cd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::UnknownChunk*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::UnknownChunk*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::UnknownChunk.GetContentSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Melanchall::DryWetMidi::Core::UnknownChunk::*)(::Melanchall::DryWetMidi::Core::WritingSettings*)>(&::Melanchall::DryWetMidi::Core::UnknownChunk::GetContentSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25a0d74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::UnknownChunk*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::UnknownChunk*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Melanchall::DryWetMidi::Core::UnknownChunk::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Melanchall::DryWetMidi::Core::UnknownChunk::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr void Melanchall::DryWetMidi::Core::UnknownChunk::__cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Data_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Melanchall::DryWetMidi::Core::UnknownChunk::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::UnknownChunk*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::UnknownChunk::WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::UnknownChunk*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, settings);
}
inline uint32_t Melanchall::DryWetMidi::Core::UnknownChunk::GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::UnknownChunk*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, settings);
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::UnknownChunk::UnknownChunk()   {
}
