#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/TooManyTrackChunksException.hpp"
#include "Melanchall/DryWetMidi/Common/zzzz__MidiException_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__TooManyTrackChunksException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TooManyTrackChunksException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::TooManyTrackChunksException::*)(int32_t)>(&::Melanchall::DryWetMidi::Core::TooManyTrackChunksException::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x25a38e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TooManyTrackChunksException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TooManyTrackChunksException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::TooManyTrackChunksException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::Melanchall::DryWetMidi::Core::TooManyTrackChunksException::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x25a3a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TooManyTrackChunksException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TooManyTrackChunksException.get_TrackChunksCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Melanchall::DryWetMidi::Core::TooManyTrackChunksException::*)()>(&::Melanchall::DryWetMidi::Core::TooManyTrackChunksException::get_TrackChunksCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a3b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TooManyTrackChunksException*>::get(),
                        "get_TrackChunksCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TooManyTrackChunksException.GetObjectData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::TooManyTrackChunksException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::Melanchall::DryWetMidi::Core::TooManyTrackChunksException::GetObjectData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x25a3b28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TooManyTrackChunksException*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TooManyTrackChunksException*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
constexpr int32_t& Melanchall::DryWetMidi::Core::TooManyTrackChunksException::__cordl_internal_get__TrackChunksCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackChunksCount_k__BackingField;
}
constexpr int32_t const& Melanchall::DryWetMidi::Core::TooManyTrackChunksException::__cordl_internal_get__TrackChunksCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackChunksCount_k__BackingField;
}
constexpr void Melanchall::DryWetMidi::Core::TooManyTrackChunksException::__cordl_internal_set__TrackChunksCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackChunksCount_k__BackingField = value;
}
inline void Melanchall::DryWetMidi::Core::TooManyTrackChunksException::_ctor(int32_t  trackChunksCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TooManyTrackChunksException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackChunksCount);
}
inline void Melanchall::DryWetMidi::Core::TooManyTrackChunksException::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TooManyTrackChunksException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline int32_t Melanchall::DryWetMidi::Core::TooManyTrackChunksException::get_TrackChunksCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TooManyTrackChunksException*>::get(),
                        "get_TrackChunksCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::TooManyTrackChunksException::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TooManyTrackChunksException*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::Melanchall::DryWetMidi::Core::TooManyTrackChunksException* Melanchall::DryWetMidi::Core::TooManyTrackChunksException::New_ctor(int32_t  trackChunksCount)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::TooManyTrackChunksException*>(trackChunksCount));
}
inline ::Melanchall::DryWetMidi::Core::TooManyTrackChunksException* Melanchall::DryWetMidi::Core::TooManyTrackChunksException::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::TooManyTrackChunksException*>(info, context));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::TooManyTrackChunksException::TooManyTrackChunksException()   {
}
