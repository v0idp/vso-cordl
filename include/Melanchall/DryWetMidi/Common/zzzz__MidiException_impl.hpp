#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Common/MidiException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Melanchall/DryWetMidi/Common/zzzz__MidiException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Common::MidiException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Common::MidiException::*)(::StringW)>(&::Melanchall::DryWetMidi::Common::MidiException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25a39b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Common::MidiException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Common::MidiException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Common::MidiException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::Melanchall::DryWetMidi::Common::MidiException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x25a3aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Common::MidiException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Melanchall::DryWetMidi::Common::MidiException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Common::MidiException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Melanchall::DryWetMidi::Common::MidiException::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Common::MidiException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::Melanchall::DryWetMidi::Common::MidiException* Melanchall::DryWetMidi::Common::MidiException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Common::MidiException*>(message));
}
inline ::Melanchall::DryWetMidi::Common::MidiException* Melanchall::DryWetMidi::Common::MidiException::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Common::MidiException*>(info, context));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Common::MidiException::MidiException()   {
}
