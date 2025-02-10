#pragma once
// IWYU pragma private; include "System/IO/Compression/Crc32Helper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Compression/zzzz__Crc32Helper_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::Crc32Helper.UpdateCrc32
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::Crc32Helper::UpdateCrc32)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b199e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get(),
                        "UpdateCrc32",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::Crc32Helper.ManagedCrc32
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::Crc32Helper::ManagedCrc32)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x2b19d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get(),
                        "ManagedCrc32",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Compression::Crc32Helper::setStaticF_s_crcTable_0(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>(std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t,::Array<uint32_t>*> System::IO::Compression::Crc32Helper::getStaticF_s_crcTable_0()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>();
}
inline void System::IO::Compression::Crc32Helper::setStaticF_s_crcTable_1(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>(std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t,::Array<uint32_t>*> System::IO::Compression::Crc32Helper::getStaticF_s_crcTable_1()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>();
}
inline void System::IO::Compression::Crc32Helper::setStaticF_s_crcTable_2(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>(std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t,::Array<uint32_t>*> System::IO::Compression::Crc32Helper::getStaticF_s_crcTable_2()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>();
}
inline void System::IO::Compression::Crc32Helper::setStaticF_s_crcTable_3(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>(std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t,::Array<uint32_t>*> System::IO::Compression::Crc32Helper::getStaticF_s_crcTable_3()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>();
}
inline void System::IO::Compression::Crc32Helper::setStaticF_s_crcTable_4(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>(std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t,::Array<uint32_t>*> System::IO::Compression::Crc32Helper::getStaticF_s_crcTable_4()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>();
}
inline void System::IO::Compression::Crc32Helper::setStaticF_s_crcTable_5(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>(std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t,::Array<uint32_t>*> System::IO::Compression::Crc32Helper::getStaticF_s_crcTable_5()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>();
}
inline void System::IO::Compression::Crc32Helper::setStaticF_s_crcTable_6(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>(std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t,::Array<uint32_t>*> System::IO::Compression::Crc32Helper::getStaticF_s_crcTable_6()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>();
}
inline void System::IO::Compression::Crc32Helper::setStaticF_s_crcTable_7(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_7", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>(std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t,::Array<uint32_t>*> System::IO::Compression::Crc32Helper::getStaticF_s_crcTable_7()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "s_crcTable_7", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get>();
}
inline uint32_t System::IO::Compression::Crc32Helper::UpdateCrc32(uint32_t  crc32, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get(),
                        "UpdateCrc32",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, crc32, buffer, offset, length);
}
inline uint32_t System::IO::Compression::Crc32Helper::ManagedCrc32(uint32_t  crc32, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Crc32Helper*>::get(),
                        "ManagedCrc32",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, crc32, buffer, offset, length);
}
// Ctor Parameters []
constexpr ::System::IO::Compression::Crc32Helper::Crc32Helper()   {
}
