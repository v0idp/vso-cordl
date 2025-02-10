#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MidiFile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiFile_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__ChunksCollection_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiChunk_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiFileFormat_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiFile_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__TimeDivision_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__WritingSettings_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiFile___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiFile___c::*)()>(&::Melanchall::DryWetMidi::Core::MidiFile___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a4940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiFile___c._Write_b__20_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Melanchall::DryWetMidi::Core::MidiFile___c::*)(::Melanchall::DryWetMidi::Core::MidiChunk*)>(&::Melanchall::DryWetMidi::Core::MidiFile___c::_Write_b__20_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25a4948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile___c*>::get(),
                        "<Write>b__20_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiChunk*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Melanchall::DryWetMidi::Core::MidiFile___c::setStaticF___9(::Melanchall::DryWetMidi::Core::MidiFile___c*  value)  {
::cordl_internals::setStaticField<::Melanchall::DryWetMidi::Core::MidiFile___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile___c*>::get>(std::forward<::Melanchall::DryWetMidi::Core::MidiFile___c*>(value));
}
inline ::Melanchall::DryWetMidi::Core::MidiFile___c* Melanchall::DryWetMidi::Core::MidiFile___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Melanchall::DryWetMidi::Core::MidiFile___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile___c*>::get>();
}
inline void Melanchall::DryWetMidi::Core::MidiFile___c::setStaticF___9__20_0(::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*, "<>9__20_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile___c*>::get>(std::forward<::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*>(value));
}
inline ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>* Melanchall::DryWetMidi::Core::MidiFile___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*, "<>9__20_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile___c*>::get>();
}
inline void Melanchall::DryWetMidi::Core::MidiFile___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Melanchall::DryWetMidi::Core::MidiFile___c::_Write_b__20_0(::Melanchall::DryWetMidi::Core::MidiChunk*  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile___c*>::get(),
                        "<Write>b__20_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiChunk*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline ::Melanchall::DryWetMidi::Core::MidiFile___c* Melanchall::DryWetMidi::Core::MidiFile___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::MidiFile___c*>());
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::MidiFile___c::MidiFile___c()   {
}
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiFile._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiFile::*)()>(&::Melanchall::DryWetMidi::Core::MidiFile::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x25a3bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiFile.get_TimeDivision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::TimeDivision* (::Melanchall::DryWetMidi::Core::MidiFile::*)()>(&::Melanchall::DryWetMidi::Core::MidiFile::get_TimeDivision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a3c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile*>::get(),
                        "get_TimeDivision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiFile.set_TimeDivision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiFile::*)(::Melanchall::DryWetMidi::Core::TimeDivision*)>(&::Melanchall::DryWetMidi::Core::MidiFile::set_TimeDivision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a3c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile*>::get(),
                        "set_TimeDivision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::TimeDivision*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiFile.get_Chunks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::ChunksCollection* (::Melanchall::DryWetMidi::Core::MidiFile::*)()>(&::Melanchall::DryWetMidi::Core::MidiFile::get_Chunks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a3c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile*>::get(),
                        "get_Chunks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiFile.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiFile::*)(::StringW, bool, ::Melanchall::DryWetMidi::Core::MidiFileFormat, ::Melanchall::DryWetMidi::Core::WritingSettings*)>(&::Melanchall::DryWetMidi::Core::MidiFile::Write)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x25a3c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiFileFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiFile.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiFile::*)(::System::IO::Stream*, ::Melanchall::DryWetMidi::Core::MidiFileFormat, ::Melanchall::DryWetMidi::Core::WritingSettings*)>(&::Melanchall::DryWetMidi::Core::MidiFile::Write)> {
  constexpr static std::size_t size = 0x7f4;
  constexpr static std::size_t addrs = 0x25a3f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiFileFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Melanchall::DryWetMidi::Core::TimeDivision*& Melanchall::DryWetMidi::Core::MidiFile::__cordl_internal_get__TimeDivision_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeDivision_k__BackingField;
}
constexpr ::Melanchall::DryWetMidi::Core::TimeDivision* const& Melanchall::DryWetMidi::Core::MidiFile::__cordl_internal_get__TimeDivision_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeDivision_k__BackingField;
}
constexpr void Melanchall::DryWetMidi::Core::MidiFile::__cordl_internal_set__TimeDivision_k__BackingField(::Melanchall::DryWetMidi::Core::TimeDivision*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TimeDivision_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Melanchall::DryWetMidi::Core::ChunksCollection*& Melanchall::DryWetMidi::Core::MidiFile::__cordl_internal_get__Chunks_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Chunks_k__BackingField;
}
constexpr ::Melanchall::DryWetMidi::Core::ChunksCollection* const& Melanchall::DryWetMidi::Core::MidiFile::__cordl_internal_get__Chunks_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Chunks_k__BackingField;
}
constexpr void Melanchall::DryWetMidi::Core::MidiFile::__cordl_internal_set__Chunks_k__BackingField(::Melanchall::DryWetMidi::Core::ChunksCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Chunks_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Melanchall::DryWetMidi::Core::MidiFile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Melanchall::DryWetMidi::Core::TimeDivision* Melanchall::DryWetMidi::Core::MidiFile::get_TimeDivision()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile*>::get(),
                        "get_TimeDivision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::TimeDivision*, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::MidiFile::set_TimeDivision(::Melanchall::DryWetMidi::Core::TimeDivision*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile*>::get(),
                        "set_TimeDivision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::TimeDivision*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Melanchall::DryWetMidi::Core::ChunksCollection* Melanchall::DryWetMidi::Core::MidiFile::get_Chunks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile*>::get(),
                        "get_Chunks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::ChunksCollection*, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::MidiFile::Write(::StringW  filePath, bool  overwriteFile, ::Melanchall::DryWetMidi::Core::MidiFileFormat  format, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiFileFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath, overwriteFile, format, settings);
}
inline void Melanchall::DryWetMidi::Core::MidiFile::Write(::System::IO::Stream*  stream, ::Melanchall::DryWetMidi::Core::MidiFileFormat  format, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiFile*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiFileFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, format, settings);
}
inline ::Melanchall::DryWetMidi::Core::MidiFile* Melanchall::DryWetMidi::Core::MidiFile::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::MidiFile*>());
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::MidiFile::MidiFile()   {
}
