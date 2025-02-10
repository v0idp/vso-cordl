#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipHelper.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Compression/zzzz__ZipHelper_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::ZipHelper.RequiresUnicode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::IO::Compression::ZipHelper::RequiresUnicode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2b154b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "RequiresUnicode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipHelper.ReadBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::System::IO::Compression::ZipHelper::ReadBytes)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2b16010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "ReadBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipHelper.DosTimeToDateTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(uint32_t)>(&::System::IO::Compression::ZipHelper::DosTimeToDateTime)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2b14348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "DosTimeToDateTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipHelper.DateTimeToDosTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::System::DateTime)>(&::System::IO::Compression::ZipHelper::DateTimeToDosTime)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2b159d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "DateTimeToDosTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipHelper.SeekBackwardsToSignature
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::Stream*, uint32_t)>(&::System::IO::Compression::ZipHelper::SeekBackwardsToSignature)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2b13228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "SeekBackwardsToSignature",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipHelper.AdvanceToPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, int64_t)>(&::System::IO::Compression::ZipHelper::AdvanceToPosition)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2b18b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "AdvanceToPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipHelper.SeekBackwardsAndRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::Stream*, ::ArrayW<uint8_t,::Array<uint8_t>*>, ::ByRef<int32_t>)>(&::System::IO::Compression::ZipHelper::SeekBackwardsAndRead)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2b19b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "SeekBackwardsAndRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Compression::ZipHelper::setStaticF_s_invalidDateIndicator(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "s_invalidDateIndicator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::IO::Compression::ZipHelper::getStaticF_s_invalidDateIndicator()  {
return ::cordl_internals::getStaticField<::System::DateTime, "s_invalidDateIndicator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get>();
}
inline bool System::IO::Compression::ZipHelper::RequiresUnicode(::StringW  test)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "RequiresUnicode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, test);
}
inline void System::IO::Compression::ZipHelper::ReadBytes(::System::IO::Stream*  stream, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  bytesToRead)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "ReadBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stream, buffer, bytesToRead);
}
inline ::System::DateTime System::IO::Compression::ZipHelper::DosTimeToDateTime(uint32_t  dateTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "DosTimeToDateTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, dateTime);
}
inline uint32_t System::IO::Compression::ZipHelper::DateTimeToDosTime(::System::DateTime  dateTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "DateTimeToDosTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, dateTime);
}
inline bool System::IO::Compression::ZipHelper::SeekBackwardsToSignature(::System::IO::Stream*  stream, uint32_t  signatureToFind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "SeekBackwardsToSignature",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, stream, signatureToFind);
}
inline void System::IO::Compression::ZipHelper::AdvanceToPosition(::System::IO::Stream*  stream, int64_t  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "AdvanceToPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stream, position);
}
inline bool System::IO::Compression::ZipHelper::SeekBackwardsAndRead(::System::IO::Stream*  stream, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, ::ByRef<int32_t>  bufferPointer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipHelper*>::get(),
                        "SeekBackwardsAndRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, stream, buffer, bufferPointer);
}
// Ctor Parameters []
constexpr ::System::IO::Compression::ZipHelper::ZipHelper()   {
}
