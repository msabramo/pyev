/*******************************************************************************
*
* Copyright (c) 2009, 2010 Malek Hadj-Ali
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice,
*    this list of conditions and the following disclaimer.
* 2. Redistributions in binary form must reproduce the above copyright notice,
*    this list of conditions and the following disclaimer in the documentation
*    and/or other materials provided with the distribution.
* 3. Neither the name of the copyright holders nor the names of its contributors
*    may be used to endorse or promote products derived from this software
*    without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
* THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
* BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
* OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
* OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
* IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
*
* Alternatively, the contents of this file may be used under the terms of the
* GNU General Public License (the GNU GPL) version 3 or (at your option) any
* later version, in which case the provisions of the GNU GPL are applicable
* instead of those of the modified BSD license above.
* If you wish to allow use of your version of this file only under the terms
* of the GNU GPL and not to allow others to use your version of this file under
* the modified BSD license above, indicate your decision by deleting
* the provisions above and replace them with the notice and other provisions
* required by the GNU GPL. If you do not delete the provisions above,
* a recipient may use your version of this file under either the modified BSD
* license above or the GNU GPL.
*
*******************************************************************************/

#ifndef _PYEV_DOC_H
#define _PYEV_DOC_H


/*******************************************************************************
* pyev_module
*******************************************************************************/

PyDoc_STRVAR(pyev_Error_doc,
"Raised when an error specific to pyev happens.");


/* pyev_module.m_doc */
PyDoc_STRVAR(pyev_m_doc,
"pyev is Python libev interface.\n\
\n\
libev is an event loop: you register interest in certain events (such as a\n\
file descriptor being readable or a timeout occurring), and it will manage\n\
these event sources and provide your program with events. To do this, it\n\
must take more or less complete control over your process (or thread) by\n\
executing the event loop handler, and will then communicate events via a\n\
callback mechanism. You register interest in certain events by registering\n\
so-called event watchers, which you initialise with the details of the\n\
event, and then hand it over to libev by starting the watcher.\n\
\n\
libev supports select, poll, the Linux-specific epoll, the BSD-specific\n\
kqueue and the Solaris-specific event port mechanisms for file descriptor\n\
events (Io), the Linux inotify interface (for Stat), Linux eventfd and\n\
signalfd (for faster and cleaner inter-thread wakeup (Async) and signal\n\
handling (Signal)), relative timers (Timer), absolute timers with\n\
customised rescheduling (Periodic), synchronous signals (Signal), process\n\
status change events (Child), and event watchers dealing with the event\n\
loop mechanism itself (Idle, Embed, Prepare and Check watchers) as well as\n\
file watchers (Stat) and even limited support for fork events (Fork).\n\
\n\
libev is written and maintained by Marc Lehmann.\n\
\n\
    See also: libev’s documentation at\n\
      <http://pod.tst.eu/http://cvs.schmorp.de/libev/ev.pod>.");


/* pyev.version() -> (str, str) */
PyDoc_STRVAR(pyev_version_doc,
"");


/* pyev.abi_version() -> (int, int) */
PyDoc_STRVAR(pyev_abi_version_doc,
"");


/* pyev.time() -> float */
PyDoc_STRVAR(pyev_time_doc,
"");


/* pyev.sleep(interval) */
PyDoc_STRVAR(pyev_sleep_doc,
"");


/* pyev.supported_backends() -> int */
PyDoc_STRVAR(pyev_supported_backends_doc,
"");


/* pyev.recommended_backends() -> int */
PyDoc_STRVAR(pyev_recommended_backends_doc,
"");


/* pyev.embeddable_backends() -> int */
PyDoc_STRVAR(pyev_embeddable_backends_doc,
"");


/* pyev.default_loop([flags=EVFLAG_AUTO, pending_cb=None, data=None, debug=False,
                      io_interval=0.0, timeout_interval=0.0]) -> 'default_loop' */
PyDoc_STRVAR(pyev_default_loop_doc,
"");


/*******************************************************************************
* LoopType
*******************************************************************************/

/* LoopType.tp_doc */
PyDoc_STRVAR(Loop_tp_doc,
"Loop([flags=EVFLAG_AUTO, pending_cb=None, data=None, debug=False,\n\
       io_interval=0.0, timeout_interval=0.0])");


/* Loop.fork() */
PyDoc_STRVAR(Loop_fork_doc,
"");


/* Loop.now() -> float */
PyDoc_STRVAR(Loop_now_doc,
"");


/* Loop.now_update() */
PyDoc_STRVAR(Loop_now_update_doc,
"");


/* Loop.suspend()
   Loop.resume() */
PyDoc_STRVAR(Loop_suspend_resume_doc,
"");


/* Loop.loop([flags]) */
PyDoc_STRVAR(Loop_loop_doc,
"");


/* Loop.unloop([how]) */
PyDoc_STRVAR(Loop_unloop_doc,
"");


/* Loop.ref()
   Loop.unref() */
PyDoc_STRVAR(Loop_ref_unref_doc,
"");


/* Loop.set_io_collect_interval(interval)
   Loop.set_timeout_collect_interval(interval) */
PyDoc_STRVAR(Loop_set_collect_interval_doc,
"");


/* Loop.pending_invoke() */
PyDoc_STRVAR(Loop_pending_invoke_doc,
"");


/* Loop.verify() */
PyDoc_STRVAR(Loop_verify_doc,
"");


/* Loop.data */
PyDoc_STRVAR(Loop_data_doc,
"");


/* Loop.debug */
PyDoc_STRVAR(Loop_debug_doc,
"");


/* Loop.default_loop */
PyDoc_STRVAR(Loop_default_loop_doc,
"");


/* Loop.iteration */
PyDoc_STRVAR(Loop_iteration_doc,
"");


/* Loop.depth */
PyDoc_STRVAR(Loop_depth_doc,
"");


/* Loop.backend */
PyDoc_STRVAR(Loop_backend_doc,
"");


/* Loop.pending_count */
PyDoc_STRVAR(Loop_pending_count_doc,
"");


/* Loop.pending_cb */
PyDoc_STRVAR(Loop_pending_cb_doc,
"");


/* watchers methods */

/* Loop.Io(fd, events, callback[, data]) */
PyDoc_STRVAR(Loop_Io_doc,
"");


/* Loop.Timer(after, repeat, callback[, data]) */
PyDoc_STRVAR(Loop_Timer_doc,
"");


/* Loop.Periodic(offset, interval, reschedule_cb, callback[, data]) */
PyDoc_STRVAR(Loop_Periodic_doc,
"");


/* Loop.Signal(signum, callback[, data]) */
PyDoc_STRVAR(Loop_Signal_doc,
"");


/* Loop.Child(pid, trace, callback[, data]) */
PyDoc_STRVAR(Loop_Child_doc,
"");


/* Loop.Stat(path, interval, callback[, data]) */
PyDoc_STRVAR(Loop_Stat_doc,
"");


/* Loop.Idle(callback[, data]) */
PyDoc_STRVAR(Loop_Idle_doc,
"");


/* Loop.Prepare(callback[, data]) */
PyDoc_STRVAR(Loop_Prepare_doc,
"");


/* Loop.Check(callback[, data]) */
PyDoc_STRVAR(Loop_Check_doc,
"");


/* Loop.Embed(other[, callback, data]) */
PyDoc_STRVAR(Loop_Embed_doc,
"");


/* Loop.Fork(callback[, data]) */
PyDoc_STRVAR(Loop_Fork_doc,
"");


/* Loop.Async(callback[, data]) */
PyDoc_STRVAR(Loop_Async_doc,
"");


/*******************************************************************************
* WatcherType
*******************************************************************************/

/* Watcher.start() */
PyDoc_STRVAR(Watcher_start_doc,
"");


/* Watcher.stop() */
PyDoc_STRVAR(Watcher_stop_doc,
"");


/* Watcher.invoke(revents) */
PyDoc_STRVAR(Watcher_invoke_doc,
"");


/* Watcher.clear_pending() -> int */
PyDoc_STRVAR(Watcher_clear_pending_doc,
"");


/* Watcher.feed_event(revents) */
PyDoc_STRVAR(Watcher_feed_event_doc,
"");


/* Watcher.loop */
PyDoc_STRVAR(Watcher_loop_doc,
"");


/* Watcher.data */
PyDoc_STRVAR(Watcher_data_doc,
"");


/* Watcher.callback */
PyDoc_STRVAR(Watcher_callback_doc,
"");


/* Watcher.active */
PyDoc_STRVAR(Watcher_active_doc,
"");


/* Watcher.pending */
PyDoc_STRVAR(Watcher_pending_doc,
"");


/* Watcher.priority */
PyDoc_STRVAR(Watcher_priority_doc,
"");


/*******************************************************************************
* IoType
*******************************************************************************/

/* IoType.tp_doc */
PyDoc_STRVAR(Io_tp_doc,
"Io(fd, events, loop, callback[, data=None])");


/* Io.set(fd, events) */
PyDoc_STRVAR(Io_set_doc,
"");


/* Io.fd */
PyDoc_STRVAR(Io_fd_doc,
"");


/* Io.events */
PyDoc_STRVAR(Io_events_doc,
"");


/*******************************************************************************
* TimerType
*******************************************************************************/

/* TimerType.tp_doc */
PyDoc_STRVAR(Timer_tp_doc,
"Timer(after, repeat, loop, callback[, data=None])");


/* Timer.set(after, repeat) */
PyDoc_STRVAR(Timer_set_doc,
"");


//XXX: reset?
/* Timer.reset() */
PyDoc_STRVAR(Timer_reset_doc,
"");


/* Timer.remaining() */
PyDoc_STRVAR(Timer_remaining_doc,
"");


/* Timer.repeat */
PyDoc_STRVAR(Timer_repeat_doc,
"");


/*******************************************************************************
* PeriodicType
*******************************************************************************/

/* PeriodicType.tp_doc */
PyDoc_STRVAR(Periodic_tp_doc,
"Periodic(offset, interval, reschedule_cb, loop, callback[, data=None])");


/* Periodic.set(offset, interval, reschedule_cb) */
PyDoc_STRVAR(Periodic_set_doc,
"");


//XXX: reset?
/* Periodic.reset() */
PyDoc_STRVAR(Periodic_reset_doc,
"");


/* Periodic.at() */
PyDoc_STRVAR(Periodic_at_doc,
"");


/* Periodic.offset */
PyDoc_STRVAR(Periodic_offset_doc,
"");


/* Periodic.interval */
PyDoc_STRVAR(Periodic_interval_doc,
"");


/* Periodic.reschedule_cb */
PyDoc_STRVAR(Periodic_reschedule_cb_doc,
"");


/*******************************************************************************
* SignalType
*******************************************************************************/

/* SignalType.tp_doc */
PyDoc_STRVAR(Signal_tp_doc,
"Signal(signum, loop, callback[, data=None])");


/* Signal.set(signum) */
PyDoc_STRVAR(Signal_set_doc,
"");


/* Signal.signum */
PyDoc_STRVAR(Signal_signum_doc,
"");


/*******************************************************************************
* ChildType
*******************************************************************************/

/* ChildType.tp_doc */
PyDoc_STRVAR(Child_tp_doc,
"Child(pid, trace, loop, callback[, data=None])");


/* Child.set(pid, trace) */
PyDoc_STRVAR(Child_set_doc,
"");


/* Child.pid */
PyDoc_STRVAR(Child_pid_doc,
"");


/* Child.rpid */
PyDoc_STRVAR(Child_rpid_doc,
"");


/* Child.rstatus */
PyDoc_STRVAR(Child_rstatus_doc,
"");


/*******************************************************************************
* StatdataType
*******************************************************************************/

/* Statdata_desc.doc */
PyDoc_STRVAR(Statdata_doc,
"Statdata object");


/* Statdata.dev */
PyDoc_STRVAR(Statdata_dev_doc,
"device");


/* Statdata.rdev */
PyDoc_STRVAR(Statdata_rdev_doc,
"device type");


/* Statdata.ino */
PyDoc_STRVAR(Statdata_ino_doc,
"inode");


/* Statdata.size */
PyDoc_STRVAR(Statdata_size_doc,
"total size, in bytes");


/* Statdata.nlink */
PyDoc_STRVAR(Statdata_nlink_doc,
"number of hard links");


/* Statdata.mode */
PyDoc_STRVAR(Statdata_mode_doc,
"protection bits");


/* Statdata.uid */
PyDoc_STRVAR(Statdata_uid_doc,
"user ID of owner");


/* Statdata.gid */
PyDoc_STRVAR(Statdata_gid_doc,
"group ID of owner");


/* Statdata.atime */
PyDoc_STRVAR(Statdata_atime_doc,
"time of last access");


/* Statdata.mtime */
PyDoc_STRVAR(Statdata_mtime_doc,
"time of last modification");


/* Statdata.ctime */
PyDoc_STRVAR(Statdata_ctime_doc,
"time of last status change");


/*******************************************************************************
* StatType
*******************************************************************************/

/* StatType.tp_doc */
PyDoc_STRVAR(Stat_tp_doc,
"Stat(path, interval, loop, callback[, data=None])");


/* Stat.set(path, interval) */
PyDoc_STRVAR(Stat_set_doc,
"");


/* Stat.stat() */
PyDoc_STRVAR(Stat_stat_doc,
"");


/* Stat.interval */
PyDoc_STRVAR(Stat_interval_doc,
"");


/* Stat.attr */
PyDoc_STRVAR(Stat_attr_doc,
"");


/* Stat.prev */
PyDoc_STRVAR(Stat_prev_doc,
"");


/* Stat.path */
PyDoc_STRVAR(Stat_path_doc,
"");


/*******************************************************************************
* IdleType
*******************************************************************************/

/* IdleType.tp_doc */
PyDoc_STRVAR(Idle_tp_doc,
"Idle(loop, callback[, data=None])");


/*******************************************************************************
* PrepareType
*******************************************************************************/

/* PrepareType.tp_doc */
PyDoc_STRVAR(Prepare_tp_doc,
"Prepare(loop, callback[, data=None])");


/*******************************************************************************
* CheckType
*******************************************************************************/

/* CheckType.tp_doc */
PyDoc_STRVAR(Check_tp_doc,
"Check(loop, callback[, data=None])");


/*******************************************************************************
* EmbedType
*******************************************************************************/

/* EmbedType.tp_doc */
PyDoc_STRVAR(Embed_tp_doc,
"Embed(other, loop[, callback=None, data=None])");


/* Embed.set(other) */
PyDoc_STRVAR(Embed_set_doc,
"");


/* Embed.sweep() */
PyDoc_STRVAR(Embed_sweep_doc,
"");


/* Embed.other */
PyDoc_STRVAR(Embed_other_doc,
"");


/* Embed.callback */
PyDoc_STRVAR(Embed_callback_doc,
"");


/*******************************************************************************
* ForkType
*******************************************************************************/

/* ForkType.tp_doc */
PyDoc_STRVAR(Fork_tp_doc,
"Fork(loop, callback[, data=None])");


/*******************************************************************************
* AsyncType
*******************************************************************************/

/* AsyncType.tp_doc */
PyDoc_STRVAR(Async_tp_doc,
"Async(loop, callback[, data=None])");


/* Async.send() */
PyDoc_STRVAR(Async_send_doc,
"");


/* Async.sent */
PyDoc_STRVAR(Async_sent_doc,
"");


#endif /* _PYEV_DOC_H */
